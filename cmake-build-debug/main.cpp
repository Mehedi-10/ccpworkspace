#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define dtype  long long
#define mod 1000000007
#define case(t, c) cout<<"Case "<<t<<":"<<c
#define mxxx 10000000000000000LL


int fx[] = {0, -1, -1, -1, 0, 0, +1, +1, +1};
int fy[] = {0, -1, 0, +1, -1, +1, -1, 0, +1};

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int t, te = 0;
    cin >> t;
    while (t--) {
        long long n, m, p, q, x1, x2, y1, y2, w;
        cin >> n >> m >> p >> q;
        long long s1, d1, s2, d2;
        cin >> s1 >> d1 >> s2 >> d2;
        vector<long long> cost(9);
        for (int i = 1; i <= 8; ++i) {
            cin >> cost[i];
        }

        vector<vector<vector<long long>>> mat(n + 1, vector<vector<long long>>(m + 1,vector<long long>(9,mxxx)));
        vector<vector<vector<pair<pair<int, int>, long long >>>> tunnel(n + 1,
                                                                 vector<vector<pair<pair<int, int>, long long >>>(m + 1));
        for (int i = 0; i < p; ++i) {
            cin >> x1 >> y1 >> x2 >> y2 >> w;
            tunnel[x1][y1].push_back({{x2, y2}, w});
        }

        for (int i = 0; i < q; ++i) {
            cin >> x1 >> y1;
            for (int j = 0; j < 9; ++j) {
                mat[x1][y1][j] = -1;
            }
        }

        if (mat[s2][d2][0] == -1)
        {
            case(++te, ' ');
            cout << -1 << endl;
            continue;

        }

        queue<pair<int, pair<int, int>>> qq;
        qq.push({0, {s1, d1}});
        for (int i = 0; i < 9; ++i) {
            mat[s1][d1][i] = 0;
        }


        while (!qq.empty()) {

            auto p = qq.front();
            qq.pop();
            for (int i = 1; i <= 8; ++i) {
                int xx = p.second.first + fx[i];
                int yy = p.second.second + fy[i];
                long long costxx = 0;
                if (p.first != i)
                    costxx = cost[i];

                if (xx > 0 && xx <= n && yy > 0 && yy <= m &&
                    mat[xx][yy][i] > mat[p.second.first][p.second.second][i] + costxx && mat[xx][yy][i] != -1) {
                    mat[xx][yy][i] = mat[p.second.first][p.second.second][i] + cost[i];
                    qq.push({i, {xx, yy}});
                }
            }
            for (auto &i : tunnel[p.second.first][p.second.second]) {
                int mn=0;
                for (int j = 0; j < 9; ++j) {
                    if(mat[p.second.first][p.second.second][mn]>mat[p.second.first][p.second.second][j])
                        mn=j;
                }
                if (mat[i.first.first][i.first.second][0] > mat[p.second.first][p.second.second][mn] + i.second &&
                    mat[i.first.first][i.first.second][0] != -1) {
                    mat[i.first.first][i.first.second][0] = mat[p.second.first][p.second.second][mn] + i.second;
                    qq.push({0, {i.first.first, i.first.second}});
                }
            }

        }
        for (int i = 0; i < 9; ++i) {
            cout<<mat[s2][d2][i]<<" ";
        }
        cout<<endl;
        if (mat[s2][d2][0] == mxxx)
            mat[s2][d2][0] = -1;
        case(++te, ' ');
        cout << mat[s2][d2][0] << endl;


    }
    return 0;
}