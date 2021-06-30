	
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
    ll n;cin>>n;
    vector<ll>x(n);
    vector<ll>y(n);
   for(ll i=0;i<n;i++){
       cin>>x[i]>>y[i];
    }
    ll ans=0;
    for(ll i=0;i<n;i++){
        for(ll j=i+1;j<n;j++){
            if(x[j]-x[i]==0){
                continue;
            }
            float avg=float (y[j]-y[i])/float(x[j]-x[i]);
            if(avg<=1 && avg>-1){
                cout<<y[j]<<y[i]<<x[j]<<x[i];
                cout<<avg;
                ans++;
            }
        }
    }
    cout<<ans<<endl;
    
}