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
#define lli long long
#define ld long double
#define vi vector<ll>
#define pb push_back
#define F first
#define S second
#define mod 1000000007
#define all(v) v.begin(), v.end()
#define allr(v) v.rbegin(), v.rend()
std::vector<lli> fact_vec;
lli fmult(lli a,lli b, lli p=mod) {return ((((a)*(b))%p)+p)%p;}
lli fpow(lli n, lli k, lli p = mod) {lli r = 1; while(k > 0) {if (k & 1) r = r * n%p; n = n * n%p; k = k >> 1;} return r;}
lli inv(lli a, lli p = mod) {return fpow(a, p - 2, p);}
ll fdiv(ll a,ll b,ll p=mod){ll yinv=inv(b);ll ans=(a*yinv)%p;return ((ans)%p+p)%p;}
lli ncr(lli n,lli r){if(r>n)return 0;return fdiv(fact_vec[n],fmult(fact_vec[r],fact_vec[n-r]));}
ll power(ll x, int y, int p)
{
    ll res = 1; // Initialize result

    x = x % p; // Update x if it is more than or
    // equal to p

    while (y > 0)
    {

        // If y is odd, multiply x with result
        if (y & 1)
            res = (res * x) % p;

        // y must be even now
        y = y >> 1; // y = y/2
        x = (x * x) % p;
    }
    return res;
}

ll modInverse(ll n, int p)
{
    return power(n, p - 2, p);
}
ll nCr(ll n, int r, int p)
{
    // If n<r, then nCr should return 0
    if (n < r)
        return 0;
    // Base case
    if (r == 0)
        return 1;

    // Fill factorial array so that we
    // can find all factorial of r, n
    // and n-r
    ll fac[n + 1];
    fac[0] = 1;
    for (int i = 1; i <= n; i++)
        fac[i] = (fac[i - 1] * i) % p;

    return (fac[n] * modInverse(fac[r], p) % p * modInverse(fac[n - r], p) % p) % p;
}
int main()
{
    test{
        ll n,k;
        cin>>n>>k;
        vector<ll>v(n);
        for(ll i=0;i<n;i++){
            cin>>v[i];
        }
        if(k>v.size()){
            cout<<0<<endl;
        }
        sort(all(v));
        ll x=v[v.size()-k-1];  
        ll cnt=0;
        for(int i=n-k;i<n;i++){
            if(v[i]==x){
                cnt++;
            }
        }
        ll cnt1=0;
        for(ll i=0;i<v.size()-k;i++){
            if(v[i]==x){
                cnt1++;
            }
        }
        ll cnt3=cnt+cnt1;
        cout<<nCr(cnt3,cnt1,mod)<<endl;
        // ll ans=1,ans1=1;
        // while(cnt1>0){
        //     ans=((ans%mod)*(cnt3%mod));
        //     ans1=((ans1%mod)*(cnt1%mod));
        //     cnt3--;
        //     cnt1--;
        // }    
        // ll k1=ans/ans1;
        // ll k1=ncr(cnt3,cnt1);
        // cout<<k1<<endl;
    }
}