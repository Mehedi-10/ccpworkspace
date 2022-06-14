#include <bits/stdc++.h>

using namespace std;
#define endl '\n'
#define hi 100000
#define lo -1000
#define inp dist6(rng)

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    freopen("input.txt", "w", stdout);
    auto seed = chrono::high_resolution_clock::now().time_since_epoch().count();
    std::mt19937 rng(seed);
    std::uniform_int_distribution<int> dist6(lo, hi); // distribution in range [1, 6]
    int t = 1000;
    cout << t << endl;
    while (t--) {
        cout << inp << " " << inp << " " << inp << " " << (inp)%1000+1000 << endl;
    }
    return 0;
}