#include <bits/stdc++.h>
using namespace std;
#define bolt                 \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0)
#define test   \
    int tt;    \
    cin >> tt; \
    while (tt--)
#define ll long long
#define ld long double
#define vll vector<ll>
#define pb push_back
#define F first
#define S second
#define mod 1000000007
#define all(v) v.begin(), v.end()
#define allr(v) v.rbegin(), v.rend()
const int N = 1e5;
int fac[N], ifac[N], inv[N];
inline ll modNum(ll a) { return (a + mod) % mod; }
inline ll modAdd(ll a, ll b) { return ((a % mod) + (b % mod)) % mod; } //a+b
inline ll modSub(ll a, ll b) { return ((a % mod) - (b % mod)) % mod; } //a-b
inline ll modMul(ll a, ll b) { return ((a % mod) * (b % mod)) % mod; } //a*b
inline ll modExp(ll a, ll b) { return ((a % mod) ^ b) % mod; }  
inline int ncr(int n, int r)
{
    if (r<0 | r> n)
        return 0;
    return 1LL * fac[n] * ifac[r] % mod * ifac[n - r] % mod;
}
void preCalc(vector<bitset<30>> &v, int n, vll &pre)
{
    vll set(30, 0);
    for(ll i=0;i<n;i++)
        for(ll j=0;j<30;j++)
            set[j] += v[i][j];
    pre[0] = 0;
    for(ll i=1;i<n+1;i++)
    {
        ll power = 1;
        ll res = 0;
         for(ll j=0;j<30;j++)
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
int main()
{
    bolt;
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