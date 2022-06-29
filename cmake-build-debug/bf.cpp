#include <bits/stdc++.h>

using namespace std;
#define fileh freopen("input.txt", "r", stdin),freopen("correctoutput.txt", "w", stdout);

int main() {
    fileh;
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> vc(n);
        set<long long >ss;
        for (auto &i : vc) {
            cin >> i;
            ss.insert(i);
        }
        bool ok = 1;

        for (int i = 0; i < n && ok; ++i) {
            for (int j = i + 1; j < n && ok; ++j) {
                for (int k = j+1; k <n && ok; ++k) {
                 long long sum=vc[i]+vc[j]+vc[k];
                 if(ss.find(sum)==ss.end())
                     ok=0;
                }
            }
        }
        cout << (!ok ? "NO" : "YES") << endl;


    }

    return 0;
}
