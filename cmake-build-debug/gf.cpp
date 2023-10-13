#include <bits/stdc++.h>

using namespace std;
#define case(t, c) cout<<"Case #"<<t<<":"<<c


template<typename T, typename U>
std::istream &operator>>(std::istream &i, pair<T, U> &p) {
    i >> p.first >> p.second;
    return i;
}

template<typename T>
std::istream &operator>>(std::istream &i, vector<T> &t) {
    for (auto &v: t) { i >> v; }
    return i;
}

template<typename T, typename U>
std::ostream &operator<<(std::ostream &o, const pair<T, U> &p) {
    o << p.x << ' ' << p.y;
    return o;
}

template<typename T>
std::ostream &operator<<(std::ostream &o, const vector<T> &t) {
    if (t.empty())o << '\n';
    for (size_t i = 0; i < t.size(); ++i) { o << t[i] << " \n"[i == t.size() - 1]; }
    return o;
}

template<typename T> using minheap = priority_queue<T, vector<T>, greater<T>>;
template<typename T> using maxheap = priority_queue<T, vector<T>, less<T>>;

template<typename T>
bool in(T a, T b, T c) { return a <= b && b < c; }

namespace std {
    template<typename T, typename U>
    struct hash<pair<T, U>> {
        hash<T> t;
        hash<U> u;

        size_t operator()(const pair<T, U> &p) const { return t(p.x) ^ (u(p.y) << 7); }
    };
}
template<typename T>
class vector2 : public vector<vector<T>> {
public:
    vector2() {}

    vector2(size_t a, size_t b, T t = T()) : vector<vector<T>>(a, vector<T>(b, t)) {}
};

template<typename T>
class vector3 : public vector<vector2<T>> {
public:
    vector3() {}

    vector3(size_t a, size_t b, size_t c, T t = T()) : vector<vector2<T>>(a, vector2<T>(b, c, t)) {}
};

template<typename T>
class vector4 : public vector<vector3<T>> {
public:
    vector4() {}

    vector4(size_t a, size_t b, size_t c, size_t d, T t = T()) : vector<vector3<T>>(a, vector3<T>(b, c, d, t)) {}
};

template<typename T>
class vector5 : public vector<vector4<T>> {
public:
    vector5() {}

    vector5(size_t a, size_t b, size_t c, size_t d, size_t e, T t = T()) : vector<vector4<T>>(a, vector4<T>(b, c, d, e,
                                                                                                            t)) {}
};

double ternary_search(vector<double>vc)
{

    double lo=vc[0],hi=vc.back(),cnt=300,ans=0;
    while (cnt--)
    {
        double m1=lo+(hi-lo)/3,m2=hi-(hi-lo)/3;

        double d1=0,d2=0;
        for (auto &i : vc) {
          d1=max(d1,abs(i-m1));
          d2=max(d2,abs(i-m2));
        }
        if(d1>d2)
            lo=m1;
        else
            hi=m2;
        ans=m2;
    }


    return ans;
}

int main() {

#ifndef ONLINE_JUDGE
    freopen("here_comes_santa_claus_input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    int t,te=0;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<double> vc(n);
        cin >> vc;
        std::sort(vc.begin(), vc.end());
        double ans = 0;

        if (n == 5) {

            ans = max(ans, ternary_search({vc[2] , vc[3] , vc[4]}) - ternary_search({vc[0] , vc[1]}));
            ans = max(ans, ternary_search({vc[3] , vc[4]})- ternary_search({vc[0] , vc[1] , vc[2]}) );
        } else {
            ans = max(ans, ternary_search({vc[n-1] ,vc[n-2]})- ternary_search({vc[0] , vc[1]}));
        }

        case(++te,' ');

        cout << fixed << setprecision(7) << ans<< endl;
    }



    return 0;
}

//Case #1: 18.0000000
//Case #2: 2.5000000
//Case #3: 5445.0000000
//Case #4: 3.3333333
//Case #5: 6.1666667
//Case #6: 59.3333333
//Case #7: 507.5000000
//Case #8: 509844786.3333334
//Case #9: 591879804.5000000
//Case #10: 786748034.5000000
//Case #11: 997872980.0000000
//Case #12: 999983020.0000000

