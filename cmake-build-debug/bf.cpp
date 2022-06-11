#include <bits/stdc++.h>
using namespace std;
#define fileh freopen("input.txt", "r", stdin),freopen("correctoutput.txt", "w", stdout);
int main()
{
    fileh;
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    long long t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int>vc(n);
        for (auto &i : vc) {
            cin>>i;
        }
        sort(vc.begin(),vc.end());
        int fans=0;
        do {
            int sum=0;
            for (int i = 0; i < n; i+=2) {
                sum+=(vc[i]+vc[i+1])/k;
            }
            fans=max(sum,fans);
        }while (next_permutation(vc.begin(),vc.end()));
        cout<<fans<<endl;

    }

}
