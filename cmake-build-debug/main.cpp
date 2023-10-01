#include <bits/stdc++.h>

using namespace std;

template<typename T, typename U>
std::istream &operator>>(std::istream &i, pair<T, U> &p) {
    i >> p.x >> p.y;
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

#define endl '\n'
#define dtype  int
#define mod 1000000007
#define case(t, c) cout<<"Case "<<t<<":"<<c


int main() {



    return 0;

}
