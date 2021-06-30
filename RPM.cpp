	
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
        ll n;
        cin>>n;
        vector<ll>v;
        vector<ll>ans;
        for(ll i=0;i<2*n;i++){
            ll x;
            cin>>x;
            v.pb(x);
       }
       for(auto it=v.begin();it!=v.end();it++){
        if(count(v.begin(),v.end(),v[*it])==0){
                ans.pb(v[*it]);
            }
       }
       for(auto it=ans.begin();it!=ans.end();it++){
           cout<<ans[*it]<<" ";
       }
       cout<<endl;
    }
}