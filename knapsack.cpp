
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
#define allr(v) v.rbegin(), v.rend()

int go(vector<ll>&v,vector<ll>&w,int i,int wt,int maxW){
    if(i>=v.size()){
        return 0;
    }
    int x;
    if(wt+w[i]<=maxW){
        x=v[i]+go(v,w,i+1,wt+w[i],maxW);
    }
    int y=go(v,w,i+1,wt,maxW);
    return max(x,y);
}
int main()
{
    bolt;
    ll n;
    cin>>n;
    vector<ll>v(n);
    vector<ll>w(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    for(ll i=0;i<n;i++){
        cin>>w[i];
    }
    ll maxW;cin>>maxW;
    cout<<go(v,w,0,0,maxW);
}