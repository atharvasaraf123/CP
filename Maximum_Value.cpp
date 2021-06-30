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
#define allr(v) v.rbegin(), v.rend()
int main(){
    bolt;
    test{
        ll n;cin>>n;
        vi v(n);
        ll pos=0;
        for(ll i=0;i<n;i++){
            cin>>v[i];
        }
        sort(all(v));
        ll a=v[0],b=v[1];
        ll c=v[n-1],d=v[n-2];
        ll x=(a*b)+(b-a);
        ll y=(c*d)+(c-d);
        cout<<max(x,y)<<endl;

    }
}