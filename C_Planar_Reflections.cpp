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
ll ans;
void go(int i,int n,int k,bool dir, map<ll,map<ll,bool>>&mapp, map<ll,map<ll,bool>>mapp1){
    if(k==0){
        return;
    }
    // cout<<i<<" ";
    if((i==0 && dir==false)||(i==n && dir)){
        ans=(ans+1)%mod;
        return;
    }
    if(dir&&mapp[i][k]){
        ans=(ans+1)%mod;
        return;
    }else if(!dir&&mapp1[i][k]){
        ans=(ans+1)%mod;
        return;
    }
    if(dir){
        go(i+1,n,k,dir,mapp,mapp1);
        go(i,n,k-1,!dir,mapp,mapp1);
        mapp[i][k]=true;
    }else{  
        go(i-1,n,k,dir,mapp,mapp1);
        go(i,n,k-1,!dir,mapp,mapp1);
        mapp1[i][k]=true;
    }
}
int main(){
    bolt;
    test{
        ll n,k;
        cin>>n>>k;
        ans=0;
        map<ll,map<ll,bool>>mapp;
        map<ll,map<ll,bool>>mapp1;
        go(0,n,k,true,mapp,mapp1);
        cout<<ans<<endl;
    }
}