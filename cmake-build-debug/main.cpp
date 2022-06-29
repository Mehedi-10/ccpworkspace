#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define dtype long long
#define case(t, c) cout<<"Case "<<(t)<<":"<<

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n;
        long long sum=0;
        vector<long long> vc(n);
        for (auto &i : vc) {
            cin >> i;
            sum+=i;
        }
        sort(vc.begin(), vc.end());
        int cnt=count(vc.begin(),vc.end(),0ll);
        if (n == 3) {
            long long sum = vc[0] + vc[1] + vc[2];
            if (sum == vc[0] || sum == vc[1] || sum == vc[2])
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else if (cnt>=n-1)
            cout << "YES" << endl;
        else if (cnt==n-2 && sum==0)
            cout << "YES" << endl;
        else if (n == 4 && (vc[0] == -vc[3] && vc[1] == -vc[2]))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;


    }

    return 0;
}