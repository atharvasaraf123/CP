

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
typedef vector<vll> vvll;
typedef queue<ll> qll;
typedef queue<ld> qld;
typedef queue<vll> qvll;
typedef queue<vld> qvld;
typedef queue<pll> qpll;
typedef queue<pld> qpld;
#define endl "\n"
#define mp make_pair
#define pb push_back
#define all(v) v.begin(), v.end()
#define fi first
#define se second
#define lb lower_bound
#define ub upper_bound
#define pi 3.14159265358979323846
#define MAX 1e18
#define ms(s, n) memset(s, n, sizeof(s))
#define prec(n) fixed << setprecision(n)
#define fori(p, n) for (ll i = p; i < (ll)n; i++)
#define forj(p, n) for (ll j = p; j < (ll)n; j++)
#define fork(p, n) for (ll k = p; k < (ll)n; k++)
#define foriv(p, n, v) for (ll i = p; i < (ll)n; i += v)
#define forjv(p, n, v) for (ll j = p; j < (ll)n; j += v)
#define forkv(p, n, v) for (ll k = p; k < (ll)n; k += v)
#define mod 1000000007
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
void IO()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
inline ll fact(ll n)
{
    if (n <= 1)
        return 1;
    return n * fact(n - 1);
}
inline ll nCr(ll n, ll r)
{
    ll res = 1;
    if (r > n - r)
        r = n - r;
    for (ll i = 0; i < r; i++)
    {
        res *= n - i;
        res /= i + 1;
    }
    return res;
}
inline ll nPr(ll n, ll r) { return fact(n) / fact(n - r); }
inline ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
inline ll lcm(ll a, ll b) { return (a / gcd(a, b) * b); }
inline ll ceil(ll num, ll den) { return ((num + den - 1) / den); }
inline bool sortbysec(const pair<ll, ll> &a, const pair<ll, ll> &b) { return (a.second < b.second); }
inline ll binpow(ll x, ll y)
{
    //a^b
    ll res = 1;
    x = x % mod;
    while (y > 0)
    {
        if (y & 1)
            res = (1ll * res * x) % mod;
        y = y >> 1;
        x = (1ll * x * x) % mod;
    }
    return res;
}

set<ll> prm;
void sieve(ll n)
{
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
    for (ll p = 2; p * p <= n; p++)
    {
        if (prime[p] == true)
        {
            for (ll i = p * p; i <= n; i += p)
            {
                prime[i] = false;
            }
        }
    }
    if (!prm.empty())
    {
        prm.clear();
    }
    for (ll p = 2; p <= n; p++)
    {
        if (prime[p])
        {
            prm.insert(p);
        }
    }
}
inline bool isPrime(ll n)
{
    ll i;
    for (i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

// nCr & nPr with mod
// nCr = fact(n) / (fact(r) x fact(n - r))
// nCr % p = (fac[n] * modInverse(fac[r]) % p * modInverse(fac[n - r]) % p) % p;
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

struct TreeNode
{
    ll val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(ll x) : val(x), left(NULL), right(NULL) {}
    // vector<TreeNode *> children;
    // TreeNode(ll x) : val(x) {}
};


void ItsTLE()
{
    ll n;
    cin >> n;
    map<ll, ll> m;
    ll v;
    for (ll i = 0; i < n; i++)
    {
        cin >> v;
        m[v]++;
    }
    ll high = 0;
    for (auto it : m)
    {
        high = max(high, it.second);
    }
    if (high <= n / 2)
    {
        if (n % 2 == 0)
            cout << 0 << endl;
        else
            cout << 1 << endl;
    }
    else
    {
        cout << high - (n - high) << endl;
    }
}

signed main()
{
    bolt;
    // IO();
    // precalcFactorial();
    // sieve(1000000);
    start
    {
        ItsTLE();
    }
}