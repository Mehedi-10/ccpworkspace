#include <bits/stdc++.h>
#define endl '\n'
#define IOS ios::sync_with_stdio(false);
using namespace std;

typedef long long ll;
const int inf = 0x3f3f3f3f;
ll T, a, b;
map<pair<int, int>, int> vis;
vector<int> v;

ll dfs(ll a, ll b)
{
    pair<int, int> p;
    p.first = a, p.second = b;
    if (a == 1 || b == 1)
        return vis[p] = 0;
    if (vis.count(p))
        return vis[p];
    ll ans = a - 1;
    if (b - a == 1)
        return vis[p] = a - 1;
    int cha = b - a;
    for (int i = 0; i < v.size(); ++i)
    {
        if (cha % v[i] == 0)
        {
            int x = a % v[i], y = v[i] - a % v[i];
            ans = min(ans, 1 + x + dfs((a - x) / v[i], (b - x) / v[i]));
            ans = min(ans, 1 + y + dfs((a + y) / v[i], (b + y) / v[i]));
        }
    }
    vis[p] = ans;
    return vis[p];
}

int main()
{
    //IOS; cin.tie(0), cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("correctoutput.txt", "w", stdout);

    cin >> T;
    while (T--)
    {
        vis.clear(), v.clear();
        cin >> a >> b;
        if (b < a)
            swap(a, b);
        ll cha = b - a;
        for (int i = 2; i <= sqrt(cha); ++i)
        {
            if (cha % i == 0)
            {
                v.push_back(i);
                while (cha % i == 0)
                    cha /= i;
            }
        }
        if (cha != 1)
            v.push_back(cha);
        cout << dfs(a, b) << endl;
    }

    return 0;
}

