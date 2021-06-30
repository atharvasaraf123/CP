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
        ll s;
        cin>>s;
        vector<ll>q(s);
        for(ll i=0;i<s;i++)cin>>q[i];
        ll ans=0;
        for(ll i=0;i<s;i++){
            ll x;
            cin>>x;
            ll k=0;
            for(ll i=0;i<x;i++){
                ll y;
                cin>>y;
                k+=y;
            }
            ans+=k;
            ans-=(x-1)*q[i];
        }
        cout<<ans<<endl;

    }
}