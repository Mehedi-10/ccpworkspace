#include <bits/stdc++.h>

using namespace std;
#define fileh freopen("input.txt", "r", stdin),freopen("correctoutput.txt", "w", stdout);


int main() {
    fileh;
    int t;
    cin >> t;
    while (t--) {
        long long n, x, y;
        cin >> n;
        vector<pair<long long, long long >> vc1;

        for (int i = 0; i < n; ++i) {
            cin >> x >> y;
            if (x > y)
                swap(x, y);
            vc1.push_back({x, y});
        }
        vector<int> vc(n);
        iota(vc.begin(), vc.end(), 0);
        long long ans = 0;
        do {
            long long sum = 0;
            for (int i = 0; i < n; i += 2) {
                sum += max({abs(vc1[vc[i]].first - vc1[vc[i + 1]].first),

                            abs(vc1[vc[i]].first - vc1[vc[i + 1]].second),
                            abs(vc1[vc[i]].second - vc1[vc[i + 1]].first),
                            abs(vc1[vc[i]].second - vc1[vc[i + 1]].second)}
                );
            }
            ans = max(ans, sum);

        } while (next_permutation(vc1.begin(), vc1.end()));
        cout << ans << endl;
    }

    return 0;
}
