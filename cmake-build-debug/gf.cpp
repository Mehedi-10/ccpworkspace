#include <bits/stdc++.h>

using namespace std;
#define endl '\n'
#define inp dist6(rng)

#define lower_val 1
#define higher_val 11
#define min_Array_Size 1
#define max_Array_Size 5

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    freopen("input.txt", "w", stdout);
    auto seed = chrono::high_resolution_clock::now().time_since_epoch().count();
    std::mt19937 rng(seed);
    int inge = 1;
    vector<vector<int>> vc;
    for (int i = lower_val; i <= higher_val; ++i) {
        for (int j = i; j <= higher_val; ++j) {
            std::uniform_int_distribution<int> dist6(i, j);
            for (int k = min_Array_Size; k <= max_Array_Size; ++k) {
                // input write what type of input you want to take

                vector<int> tmp;
                for (int l = 0; l < k; ++l) {
                    tmp.emplace_back(inp);
                }
                vc.emplace_back(tmp);

                inge += tmp.size();

//                if inp size >= 2.5 mb break

                if (((inge * sizeof(int)) * 1e-6) > 2.5) {
                    return 0;
                }

            }
        }
    }

    cout << vc.size() << endl;
    for (auto &k : vc) {
        cout << k.size() << endl;
        for (auto &i : k) {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}