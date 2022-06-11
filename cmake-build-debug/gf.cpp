#include <iostream>
#include <random>
using namespace std;
#define endl '\n'
#define hi 10
#define lo 1
#define inp dist6(rng)
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    freopen("input.txt", "w", stdout);
    std::random_device dev;
    std::mt19937 rng(dev());
    std::uniform_int_distribution<std::mt19937::result_type> dist6(lo,hi); // distribution in range [1, 6]

    int t=20;
    cout<<t<<endl;

    while (t--)
    {
        int n=inp,k=inp;
        if(n&1)
            n++;
        cout<<n<<" "<<k<<endl;
        for (int i = 0; i < n; ++i) {
            cout<<inp<<" ";
        }
        cout<<endl;

    }
    return 0;
}