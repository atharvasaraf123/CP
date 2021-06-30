/*~~~~~~~~
    Divyank Lunkad 
~~~~~~~~*/

#include <bits/stdc++.h>
#include <ctime>
#include <unistd.h>
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
void IO()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
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

/*~~~~~~~~
     Divyank Lunkad 
~~~~~~~~*/

ll ItsTLE(ll n, vector<string> &v)
{
    unordered_set<string> memory;
    vector<vector<string>> _ms(26);
    unordered_map<string, unordered_set<char>> count;
    vector<bool> initials(26, false);
    unordered_map<string, ll> freq;
    for (int i = 0; i < n; i++)
    {
        initials[v[i][0] - 'a'] = 1;
        memory.insert(v[i]);
        freq[v[i]]++;
        _ms[v[i][0] - 'a'].push_back(v[i].substr(1));
        
    }
    for (int i = 0; i < n; i++)
    {
        string s = v[i];
        string suffix = s.substr(1);
        for (int j = 0; j < 26; j++)
        {
            if (j != s[0] - 'a' && initials[j])
            {
                s[0] = 'a' + j;
                if (memory.find(s) == memory.end())
                {
                    count[suffix].insert(s[0]);
                }
            }
        }
    }
    ll ans = 0;
    for (auto it = count.begin(); it != count.end(); it++)
    {
        for (char c : it->second)
        {
            auto suffix = _ms[c - 'a'];
            for (string sfx : suffix)
            {
                for (char d : count[sfx])
                {
                    string s = string(1, c) + sfx, t = string(1, d) + it->first;
                    if (memory.find(s) != memory.end() && memory.find(t) != memory.end())
                        ans += freq[t];
                }
            }
        }
    }
    return ans;
}

ll correctSol(ll n, vector<string> &v)
{
    unordered_set<string> s;
    for (ll i = 0; i < n; i++)
        s.insert(v[i]);
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (v[i][0] == v[j][0])
                continue;
            if (s.find(v[i][0] + v[j].substr(1)) == s.end() && s.find(v[j][0] + v[i].substr(1)) == s.end())
            {
                // cout<<v[i]<<" "<<v[j]<<" ";
                ans += 2;
            }
        }
    }
    return ans;
}

ll generateNumber(ll l, ll r)
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distr(l, r);
    return distr(gen);
}
string generateString(ll len)
{
    string tmp_s;
    static const char alphanum[] =
        // "0123456789"
        // "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        // "abcdefghijklmnopqrstuvwxyz";
        "ab";

    srand((unsigned)time(NULL) * getpid());

    tmp_s.reserve(len);
    for (int i = 0; i < len; ++i)
    {
        ll x = generateNumber(0, sizeof(alphanum) - 2);
        tmp_s += alphanum[x];
    }

    return tmp_s;
}

signed main()
{
    // IO();
    bolt;
    start
    {
        ll n = generateNumber(2, 20);
        vector<string> v(n);
        for (int i = 0; i < n; i++)
            v[i] = generateString(generateNumber(2, 5));
        ll my = ItsTLE(n, v);
        ll correct = correctSol(n, v);
        printV(v);
        if (my != correct)
        {
            cout << my << " " << correct << endl;
            printV(v);
        }
    }
}