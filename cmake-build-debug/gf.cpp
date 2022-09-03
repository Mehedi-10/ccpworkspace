#include <bits/stdc++.h>

using namespace std;
#define endl '\n'
#define inp dist6(rng)

/**************************/
#define low 0
#define high 7
#define maxArraySize  3
#define minArraySize 1
/*************************/

vector<vector<pair<int,int>>> vc;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    freopen("input.txt", "w", stdout);
    auto seed = chrono::high_resolution_clock::now().time_since_epoch().count();
    std::mt19937 rng(seed);
    int inge = 1;
    for (int i = low; i <= high; ++i) {
        for (int j = i; j <= high; ++j) {
            std::uniform_int_distribution<int> dist6(i, j);
            for (int k = minArraySize; k <= maxArraySize; ++k) {
                for (int xx = 0; xx < 7; ++xx) {
                    vector<pair<int,int>> tmp;
                    for (int l = 0; l < 2*k; ++l) {
                        tmp.emplace_back(inp,inp);
                    }
                    vc.emplace_back(tmp);
                    inge += tmp.size();
                    if (((inge * sizeof(int)) * 1e-6) > 2.5) {
//                        system("g++ -o comp largevalue.cpp");
                        return 0;
                    }

                    if (i == j)
                        break;
                }

            }
        }
    }

    cout << vc.size() << endl;
    for (auto &i : vc) {
        cout << i.size() << endl;
        for (auto &j : i) {
            cout << j.first << " "<<j.second<<endl;
        }
    }


    return 0;
}