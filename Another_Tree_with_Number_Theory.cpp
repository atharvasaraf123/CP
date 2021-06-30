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
    ll n;
    cin>>n;
    vector<ll>v(n+1);
    v[1]=-1;
    for(ll i=2;i<=n;i++){
        cin>>v[i];
    }
    vi child(n+1,0);
    child[0]=-1;
    vector<vector<ll>>parent(n+1);
    for(ll i=1;i<=n;i++){
        ll x=0;
        for(ll j=2;j<=n;j++){
            if(v[j]==i){
                parent[i].pb(j);
                x++;
            }
        }
        child[i]=x;
    }
    // for(ll i=1;i<=n;i++){
    //     cout<<parent[i].size()<<" ";
    // }
    ll q;cin>>q;
    while(q--){
        ll a,b;
        cin>>a>>b;
        cout<<go(a,b,parent)<<endl;
    }

}