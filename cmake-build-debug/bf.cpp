#include <bits/stdc++.h>

using namespace std;
#define fileh freopen("input.txt", "r", stdin),freopen("correctoutput.txt", "w", stdout);

int main() {
    fileh;
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    long long t;
    cin >> t;
    while (t--) {
        long long x, a, d, n;
        cin >> x >> a >> d >> n;
        vector<long long> ans;
        for (int i = 0; i < n; ++i) {
            ans.emplace_back(abs(x - (a + i * d)));
        }
        cout << *min_element(ans.begin(), ans.end()) << endl;

    }


    return 0;
}
