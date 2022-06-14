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
        long long x, a, d, n;
        cin >> x >> a >> d >> n;
        n--;
        if(x<=a)
        {
            cout<<a-x<<endl;
            continue;
        } else if(a+n*d<=x)
        {
            cout<<x-(a+n*d)<<endl;
            continue;
        } else
        {
            long long ans=INT_MAX;
            for (int i = 0; i < n; ++i) {
                ans=min(ans,abs(x-a+i*d));
            }
            cout<<ans<<endl;
        }

    }


    return 0;
}
