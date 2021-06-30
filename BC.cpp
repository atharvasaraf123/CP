	
#include <bits/stdc++.h>
using namespace std;
#define bolt ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define test int tt; cin>>tt; while(tt--)
#define ll long long
#define ld long double
#define vi vector<ll>
#define mii map<ll,ll>
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
        vector<ll>v(n);
        for(ll i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        ll ans=0;
        for(ll k=2;k<=2*n;k++){
            ll max=0;
            ll sum=k;
            ll a=0;
            ll b=n-1;
            while(a<b){
                // cout<<"h";
                if((v[a]+v[b])==sum){
                    max++;
                    a++;
                    b--;
                }else if((v[a]+v[b])>sum){
                    b--;
                }else{
                    a++;
                }
            }
            // cout<<max<<endl;
            if(max>ans){
                ans=max;
            }
        }
        cout<<ans<<endl;
    }
}