	
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
        vector<ll> v;
        for(ll i=0;i<n;i++){
            ll x;
            cin>>x;
            v.pb(x);
        }
        bool flag=true;
        sort(v.begin(),v.end());
        while(v.size()!=1){
            if(v[1]-v[0]<=1){
                v.erase(v.begin());
            }else{
                flag=false;
                break;
            }
        }
        if(flag==true){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}