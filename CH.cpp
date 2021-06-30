	
#include <bits/stdc++.h>
using namespace std;
#define bolt ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define test int tt; cin>>tt; while(tt--)
#define ll long long
#define ld long double
#define vi vector<ll>
#define pb push_back
#define F first
#define S second
#define mod 1000000007
#define all(v) v.begin(), v.end()
#define allr(v) v.rbegin(), v.rend()
int main()
{
    bolt;
    test{
        ll n,b,m;
        cin>>n>>b>>m;
        ll v[m];
        for(ll i=0;i<m;i++){
            ll x;
            cin>>x;
           v[i]=x;
     }
        ll ans=1;
        for(ll i=1;i<m;i++){
            if((v[(i-1)])/b!=(v[i])/b){
                ans++;
            }
        }
        cout<<ans<<endl; 
    }
 }