	
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
        ll n;cin>>n;
        ll x;
        cin>>x;
        vector<ll>v(n);
        ll sum=0;
        ll max=0;
        for(ll i=0;i<n;i++){
            cin>>v[i];
            sum+=v[i];
        }
        for(ll i=0;i<n;i++){
             if(v[i]%x==0){
                max+=v[i]/x;
            }else{
                max+=v[i]/x+1;
            }
            // cout<<max;
        }
        ll k=0;
        if(sum%x==0){
            k=sum/x;
        }else{
            k=sum/x+1;
        }
        cout<<k<<" "<<max<<endl;

    }
}