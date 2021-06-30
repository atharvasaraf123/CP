	
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
int main(){
    bolt;
    test{
        ll n;
        cin>>n;
        vector<ll>a,b;
        for(ll i=0;i<n;i++){
            ll x;
            cin>>x;
            a.push_back(x);
        }
        for(ll j=0;j<n;j++){
            ll x;
            cin>>x;
            b.push_back(x);
        }
        int a_max=*min_element(a.begin(),a.end());
        int b_max=*min_element(b.begin(),b.end());
        for(ll i=0;i<n;i++){
            a[i]-=a_max;
            b[i]-=b_max;
        }
        ll ans=0;
        for(ll i=0;i<n;i++){
            ans+=max(a[i],b[i]);
        }
        cout<<ans<<endl;
    }
}