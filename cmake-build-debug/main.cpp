#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define dtype  long long
#define mod 1000000007
#define case(t, c) cout<<"Case "<<t<<":"<<c


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

vector<dtype> prime;
bitset<100000> mark;

inline void sieve(dtype n) {
    mark[0] = mark[1] = 1;
    dtype i, j, limit = sqrt(n * 1.0) + 2;
    prime.emplace_back(2);
    for (i = 4; i <= n; i += 2)
        mark[i] = 1;
    for (i = 3; i <= n; i += 2) {
        if (!mark[i]) {
            prime.emplace_back(i);
            if (i <= limit) {
                for (j = i * i; j <= n; j += i * 2)
                    mark[j] = 1;
            }
        }
    }
}

vector<int> divs;
map<pair<int,int>,int>memo;

int dfs(int a, int b, int x) {

    if(memo.find({a,b})!=memo.end())
        return memo[{a,b}];

    if (a == 1)
        return memo[{a,b}]=0;
    else if (abs(a - b) == 1) {
        return memo[{a,b}]=min(a, b) - 1;
    }

    int ans = a-1;
    for (auto &i: divs) {
        if (x % i)
            continue;
        int r = a % i, rm = i - (a % i);
        ans = min({ans, dfs((a - r) / i, (b - r) / i, x / i) + r + 1, dfs((a + rm) / i, (b + rm) / i, x / i) + rm + 1});
    }

    return memo[{a,b}]=ans;

}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    sieve(32000);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        if (a > b)
            swap(a, b);
        divs.clear();
        memo.clear();
        int c = b - a;
        for (int i = 0; prime[i] * prime[i] <= c; ++i) {
            if (c % prime[i] == 0) {
                while (c % prime[i] == 0)
                    c /= prime[i];
                divs.emplace_back(prime[i]);
            }
        }
        if (c > 1)
            divs.emplace_back(c);

        cout << min(dfs(a, b, b - a), a - 1) << endl;
    }

    return 0;
}

