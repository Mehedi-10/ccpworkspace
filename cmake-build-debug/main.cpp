#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define dtype long long
#define mod 1000000007
#define case(t, c) cout<<"Case "<<(t)<<":"<<c

int main() {

    ios_base::sync_with_stdio(false), cin.tie(nullptr);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    long long x, a, d, n, t;

        cin >> x >> a >> d >> n;
        n--;
        if(d<0)
            a=a+n*d;
        d=abs(d);
        if (x <= a)
            cout << a - x << endl;
        else if ((a + n * d) <= x)
            cout << (x - a) - n * d << endl;
        else
            cout << min(d - (x - a) % d, (x - a) % d) << endl;

    return 0;
}
