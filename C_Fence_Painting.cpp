

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<long long, long long> pll;
typedef pair<string, string> pss;
#define mp make_pair
typedef vector<ll> vll;
typedef vector<pll> vpll;
#define vvll(r, c, vec) vector<vll> vec(r, vll(c))
#define pb push_back
#define all(v) v.begin(), v.end()
typedef queue<ll> qll;
typedef queue<vll> qvll;
typedef queue<pll> qpll;
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
#define read(a)       \
    for (auto &p : a) \
        cin >> p;
#define printV(a)         \
    for (auto p : a)      \
        cout << p << " "; \
    cout << endl;
#define printM(m)                                     \
    for (auto it : m)                                 \
        cout << it.first << " " << it.second << endl; \
    cout << endl;
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
ll expo(ll x, ll y)
{
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
ll ncr(ll n, ll r)
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
inline ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
inline ll lcm(ll a, ll b) { return (a / gcd(a, b) * b); }
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
inline ll ceil(ll num, ll den) { return ((num + den - 1) / den); }
bool sortbysec(const pair<ll, ll> &a, const pair<ll, ll> &b) { return (a.second < b.second); }
#define _RW                           \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

// nCr & nPr with mod
// nCr = fact(n) / (fact(r) x fact(n - r))
// nCr % p = (fac[n] * modIverse(fac[r]) % p * modIverse(fac[n - r]) % p) % p;

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

int ncr(int n, int r)
{
    if (r<0 | r> n)
        return 0;
    return 1LL * fac[n] * ifac[r] % mod * ifac[n - r] % mod;
}

int npr(int n, int r)
{
    if (r<0 | r> n)
        return 0;
    return 1LL * fac[n] * ifac[n - r] % mod;
}

ll binpow(ll a, ll b)
{
    //a^b
    ll res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}


void givemeac()
{
    ll n, m;
    cin >> n >> m;
    vll a(n), b(n), c(m);
    read(a);
    read(b);
    read(c);
    set<pll> mismatch;
    set<pll> correct;
    for (int i = 0; i < n; i++)
    {
        if (b[i] != a[i])
        {
            mismatch.insert({b[i], i + 1});
        }
        else
        {
            correct.insert({b[i], i + 1});
        }
    }
    if (m < mismatch.size())
    {
        cout << "NO" << endl;
        return;
    }
    vll ans(m);
    vll issues;
    ll temp = -1;
    for (int i = 0; i < m; i++)
    {
        int x = c[i];
        auto it = find_if(mismatch.begin(), mismatch.end(), [x](const pll &p) {
            return p.first == x;
        });
        if (it != mismatch.end())
        {
            ans[i] = it->second;
            temp = it->second;
            correct.insert({it->first, it->second});
            mismatch.erase(it);
        }
        else
        {
            auto it = find_if(correct.begin(), correct.end(), [x](const pll &p) {
                return p.first == x;
            });
            if (it != correct.end())
            {
                ans[i] = it->second;
                temp = it->second;
            }
            else
            {
                issues.push_back(i);
            }
        }
    }
    if (!mismatch.empty() || temp == -1)
    {
        cout << "NO" << endl;
        return;
    }
    for (int i : issues)
    {
        ans[i] = temp;
    }
    cout << "YES" << endl;
    printV(ans);
}

signed main()
{
    bolt;
    start
    {
        givemeac();
    }
}