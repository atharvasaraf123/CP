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
int go(int a,int b,vector<vector<ll>>&parent){
    if(parent[a].size()==0){
        return 0;
    }
    if(b%(parent[a].size())!=0){
        return b;
    }
    ll x=0;
    for(ll i=0;i<parent[a].size();i++){
        x+=go(parent[a][i],b/(parent[a].size()),parent);
    }
    return x;

}
int main(){
    bolt;
    test{
        ll n;
        cin>>n;
        vi v(n);
        for(ll i=0;i<n;i++){
            cin>>v[i];
        }
        sort(all(v));
        ll x=v[0];
        ll ans=0;
        for(ll i=1;i<n;i++){
            if(v[i]!=x){
                ans++;
            }
        }
        cout<<ans<<endl;
    }

}