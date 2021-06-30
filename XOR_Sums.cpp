#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<ll, ll> pll;
typedef pair<ld, ld> pld;
typedef pair<string, string> pss;
typedef vector<ll> vll;
typedef vector<ld> vld;
typedef vector<pll> vpll;
typedef vector<pld> vpld;
typedef queue<ll> qll;
typedef queue<ld> qld;
typedef queue<vll> qvll;
typedef queue<vld> qvld;
typedef queue<pll> qpll;
typedef queue<pld> qpld;
#define endl "\n"
#define mp make_pair
#define vvll(r, c, vec) vector<vll> vec(r, vll(c))
#define pb push_back
#define all(v) v.begin(), v.end()
#define fi first
#define se second
#define lb lower_bound
#define ub upper_bound
#define pi 3.1415926535
#define MAX 1e18
#define ms(s, n) memset(s, n, sizeof(s))
#define prec(n) fixed << setprecision(n)
#define fori(p, n) for (ll i = p; i < (ll)n; i++)
#define forj(p, n) for (ll j = p; j < (ll)n; j++)
#define fork(p, n) for (ll k = p; k < (ll)n; k++)
#define mod 998244353
#define bolt                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define setbits(a) __builtin_popcountll(a)
#define start \
    ll t;     \
    cin >> t; \
    while (t--)
template <typename T>
istream &operator>>(istream &input, vector<T> &data)
{
    for (T &x : data)
        input >> x;
    return input;
}
template <typename T>
ostream &operator<<(ostream &output, const vector<T> &data)
{
    for (const T &x : data)
        output << x << " ";
    return output;
}
template <typename T>
ostream &operator<<(ostream &output, const set<T> &data)
{
    for (auto it : data)
        output << it << " ";
    return output;
}
template <typename T>
ostream &operator<<(ostream &output, const unordered_set<T> &data)
{
    for (auto it : data)
        output << it << " ";
    return output;
}
template <typename T, typename S>
ostream &operator<<(ostream &output, const map<T, S> &data)
{
    for (auto it : data)
        output << it.first << " " << it.second << endl;
    return output;
}
template <typename T, typename S>
ostream &operator<<(ostream &output, const unordered_map<T, S> &data)
{
    for (auto it : data)
        output << it.first << " " << it.second << endl;
    return output;
}
template <typename T, typename S>
ostream &operator<<(ostream &output, const pair<T, S> &data)
{
    output << data.first << " " << data.second << endl;
    return output;
}
inline ll fact(ll n)
{
    if (n <= 1)
        return 1;
    return n * fact(n - 1);
}
const int N = 1e5;
int fac[N], ifac[N], inv[N];
void precalcFactorial()
{
    fac[0] = ifac[0] = fac[1] = ifac[1] = inv[0] = inv[1] = 1;
    for (int i = 2; i < N; i++)
    {
        fac[i] = 1LL * fac[i - 1] * i % mod;
        inv[i] = mod - 1LL * inv[mod % i] * (mod / i) % mod;
        ifac[i] = 1LL * ifac[i - 1] * inv[i] % mod;
    }
}
inline int ncr(int n, int r)
{
    if (r<0 | r> n)
        return 0;
    return 1LL * fac[n] * ifac[r] % mod * ifac[n - r] % mod;
}
inline int npr(int n, int r)
{
    if (r<0 | r> n)
        return 0;
    return 1LL * fac[n] * ifac[n - r] % mod;
}

inline ll modNum(ll a) { return (a + mod) % mod; }
inline ll modAdd(ll a, ll b) { return ((a % mod) + (b % mod)) % mod; } //a+b
inline ll modSub(ll a, ll b) { return ((a % mod) - (b % mod)) % mod; } //a-b
inline ll modMul(ll a, ll b) { return ((a % mod) * (b % mod)) % mod; } //a*b
inline ll modExp(ll a, ll b) { return ((a % mod) ^ b) % mod; }         //a^b

void preCalc(vector<bitset<30>> &v, int n, vll &pre)
{
    vll set(30, 0);
    fori(0, n)
        forj(0, 30)
            set[j] += v[i][j];
    pre[0] = 0;
    fori(1, n + 1)
    {
        ll power = 1;
        ll res = 0;
        forj(0, 30)
        {
            ll calc = 0;
            for (ll k = 1; k < n; k += 2)
                calc = modAdd(calc, modMul(ncr(set[j], k), (ncr(n - set[j], i - k))));
            calc = modMul(calc, power);
            power = modMul(power, (ll)2);
            res = modAdd(res, calc);
        }
        pre[i] = modAdd(pre[i - 1], res);
    }
}

void givemeac()
{
    ll n;
    cin >> n;
    vector<bitset<30>> v(n);
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        bitset<30> bs(x);
        v[i] = bs;
    }
    vector<ll> pre(n + 1);
    preCalc(v, n, pre);
    ll q;
    cin >> q;
    while (q--)
    {
        ll m;
        cin >> m;
        cout << pre[m] << endl;
    }
}

signed main()
{
    bolt;
    // IO();
    precalcFactorial();
    // sieve(1000000);
    // start
    // {
    givemeac();
    // }
}