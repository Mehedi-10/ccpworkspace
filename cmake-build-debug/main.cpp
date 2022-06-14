#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define dtype long long
#define mod 1000000007
#define case(t, c) cout<<"Case "<<(t)<<":"<<c

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    long long t;
    cin >> t;
    while (t--) {
        long long n, k, a;
        cin >> n >> k;
        map<long long, priority_queue<long long>> mp;
        vector<long long> tmp1;
        map<long long, long long> modd;
        for (long long i = 0; i < n; ++i) {
            cin >> a;
            tmp1.emplace_back(a);
            mp[a % k].push(a);
        }
        long long sum = 0;
        vector<long long> vc;
        for (auto &i: mp) {
            if (mp.find(k - i.first) != mp.end()) {
                long long b;
                a = i.first;
                b = k - a;
                long long tsum = 0;
                while (!mp[a].empty() and !mp[b].empty()) {
                    if (a == b && mp[a].size() == 1)
                        break;
                    tsum += mp[a].top();
                    mp[a].pop();
                    tsum += mp[b].top();
                    mp[b].pop();

                }
                sum += (tsum / k);
            }
            while (!i.second.empty())
                vc.emplace_back(i.second.top()), i.second.pop();
        }
        std::sort(vc.begin(), vc.end());
        n = vc.size();
        long long i = 0;
        long long extra1 = 0, extra2 = 0;
        long long j = n - 1;
        while (i < j && (vc[i] + vc[j]) / k == 0)
            i++;
        while (i < j) {
            extra1 += (vc[i] + vc[j]) / k;
            i++, j--;
        }
        for (long long l = n - 1; l > 0; l -= 2) {
            extra2 += (vc[l] + vc[l - 1]) / k;
        }
        std::sort(tmp1.begin(), tmp1.end());
        long long sum11 = 0;
        for (int l = (int) tmp1.size() - 1; l > 0; l-=2) {
            sum11 += (tmp1[l] + tmp1[l - 1]) / k;
        }

        cout << max({sum + extra1, sum + extra2, sum11}) << endl;


    }

    return 0;
}
