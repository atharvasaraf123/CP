
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
#define vi vector<ll>
#define pb push_back
#define F first
#define S second
#define mod 1000000007
#define all(v) v.begin(), v.end()
int gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
     
}
int main()
{
    bolt;
    test{
        ll ans;
        ll n;
        cin>>n;
        for(ll i=n;true;i++){
            ll k=i;
            ll sum=0;
            while(k>0){
                sum+=k%10;
                k=k/10;
            }
            if(gcd(i,sum)>1){
                ans=i;
                break;
            }
        }
        cout<<ans<<endl;
    }
}