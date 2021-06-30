//  zukonit14 - Kunal Raut

#include<bits/stdc++.h>
using namespace std;

// #include "ext/pb_ds/assoc_container.hpp"
// #include "ext/pb_ds/tree_policy.hpp"
// using namespace __gnu_pbds;

// template<class T>
// using oset = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update> ;

// template<class key, class value, class cmp = std::less<key>>
// using omap = tree<key, value, cmp, rb_tree_tag, tree_order_statistics_node_update>;
// find_by_order(k)  returns iterator to kth element starting from 0;
// order_of_key(k) returns count of elements strictly smaller than k;

/*/-----------------------------DEFINES----------------------------------/*/

#define ll                  long long
#define ld                  long double
#define pb                  push_back
#define mp                  make_pair
#define fi                  first
#define se                  second
#define pi                  3.1415926535
#define all(v)              v.begin(), v.end()
#define allr(v)             v.rbegin(), v.rend()
#define ms(s, n)            memset(s, n, sizeof(s))
#define prec(n)             fixed<<setprecision(n)
#define forci(p,n)          for(ll i=p;i<(ll)n;i++)
#define forcj(p,n)          for(ll j=p;j<(ll)n;j++)
#define forc(i,p,n)            for(ll i=p;i<(ll)n;i++)
#define bolt                ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define bits(a)             __builtin_popcountll(a)
#define djokovic            freopen("input00.txt", "r", stdin);freopen("output00.txt", "w", stdout);
#define inrange(i,a,b)      ((i>=min(a,b)) && (i<=max(a,b)))
#define sz(a)               (ll)a.size()
clock_t time_p              = clock();
void rtime()                {time_p = clock() - time_p; cout << "\nTime Taken : " << fixed << (float)(time_p) / CLOCKS_PER_SEC << "s\n";}

/*/-----------------------------INLINE FUNCTIONS----------------------------------/*/

inline ll gcd(ll a, ll b)          {if (b == 0) return a;    return gcd(b, a % b);}
inline ll lcm(ll a, ll b)          {return (a / gcd(a, b) * b);}
inline bool prime(ll n)            {ll i; for (i = 2; i <= sqrt(n); i++) {if (n % i == 0)return false;} return true;}
inline ll ceil(ll num, ll den)      {return ((num + den - 1) / den);}

/*/-----------------------------TRACE FUNCTIONS----------------------------------/*/

template<class T> ostream& operator<<(ostream &os, string V) {
    os << "[ ";
    for (auto v : V) os << v << " ";
    return os << "]";
}
template<class T> ostream& operator<<(ostream &os, vector<T> V) {
    os << "[ ";
    for (auto v : V) os << v << " ";
    return os << "]";
}
template<class T> ostream& operator<<(ostream &os, set<T> S) {
    os << "{ ";
    for (auto s : S) os << s << " ";
    return os << "}";
}
template<class T> ostream& operator<<(ostream &os, multiset<T> S) {
    os << "{ ";
    for (auto s : S) os << s << " ";
    return os << "}";
}
template<class T, class T1> ostream& operator<<(ostream &os, map<T, T1> S) {
    os << "{ ";
    for (auto s : S) os << "(" << s.first << "," << s.second << ") ";
    return os << "}";
}
template<class L, class R> ostream& operator<<(ostream &os, pair<L, R> P) {
    return os << "(" << P.first << "," << P.second << ")";
}
#define tracearr(a,n)  {cout << #a<<" : ";cout<<"[ ";for (ll i = 0; i < n; i++) cout << a[i] << " ";cout << "]\n";}
#define TRACE
#ifdef TRACE
#define trace(...) __f(#__VA_ARGS__, __VA_ARGS__)
template <typename Arg1>
void __f(const char* name, Arg1&& arg1) {
    cout << name << " : " << arg1 << endl;
}
template <typename Arg1, typename... Args>
void __f(const char* names, Arg1&& arg1, Args&&... args) {
    const char* comma = strchr(names + 1, ',');
    cout.write(names, comma - names) << " : " << arg1 << " | ";
    __f(comma + 1, args...);
}
#else
#define trace(...)
#endif

/*/-----------------------------MODULAR ARITHMETIC----------------------------------/*/

const ll modx = 1e9 + 7;
// const ll modx = 998244353;
const ll mod = modx;
inline ll add(ll x, ll y, ll mod = modx) {
    x += y;
    if (x >= mod) return x - mod;
    return x % mod;
}
inline ll sub(ll x, ll y, ll mod = modx) {
    x -= y;
    if (x < 0) return x + mod;
    return x;
}
inline ll mul(ll x, ll y, ll mod = modx) {
    return (x * 1ll * y) % mod;
}
inline ll expo(ll x, ll y, ll mod = modx) {
    ll ans = 1;
    while (y) {
        if (y & 1) ans = mul(ans, x, mod);
        x = mul(x, x, mod);
        y >>= 1;
    }
    return ans % mod;
}
inline ll inv(ll x, ll mod = modx) {
    return expo(x, mod - 2, mod);
}
/*/-----------------------------CODE BEGINS----------------------------------/*/

ll rr[] = {0, 1, 1, 1, 0, -1, -1, -1};
ll cc[] = {1, 1, 0, -1, -1, -1, 0, 1};  //x-y -> URDL , row-column -> RDLU; 0-based;

const ll MAXN = 1e6 + 100, MAX2N = 2e3 + 10, LG = 20, INF = 2e18, base = 33;
const ll N = 1e7 + 10;
ll n, m, k, q, x,  y, z, a[MAX2N][MAX2N];
void solve()
{
    cin >> n >> k;
    if (k < n)
    {
        x = (n / k);
        ll k1 = k;
        k *= x;
        if (k < n) k += k1;
        cout << ceil(k, n) << "\n";
    }
    else
    {
        cout << ceil(k, n) << "\n";
    }
}
signed main()
{
    bolt;
#ifndef ONLINE_JUDGE
    djokovic;
#endif
    ll t;
    t = 1;
    cin >> t;
    for (ll i = 1; i <= t; i++)
    {
        //cout << "Case #" << i << ": ";
        solve();
    }
    //rtime();
}
