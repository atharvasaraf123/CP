
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
int main()
{
    bolt;
    test{
       ll n;cin>>n;
       vector<ll>v(n);
       map<int,int>mapp,mapp1;
       bool ans=false;
       for(ll i=0;i<n;i++){
           cin>>v[i];
           if(mapp[v[i]]!=0){
               ans=true;
           }
           mapp[v[i]]++;
           mapp1[v[i]]++;
       }
       vector<ll>a;
       for(int i=1;i<=n;i++){
           if(mapp[i]==0){
               a.push_back(i);
           }
       }
       if(ans==false){
           for(ll i=0;i<n;i++){
               cout<<v[i]<<" ";
           }
           cout<<endl;
           for(ll i=0;i<n;i++){
               cout<<v[i]<<" ";
           }
           cout<<endl;
       }else{
           map<int,int>m;
           ll k=0;
           for(ll i=0;i<n;i++){
               m[v[i]]++;
               if(m[v[i]]>1){
                   cout<<a[k]<<" ";
                   k++;
               }else{
                   cout<<v[i]<<" ";
               }
           }
           cout<<endl;
           ll max1=0;
           m.clear();
           for(ll i=0;i<n;i++){
               m[v[i]]++;
               max1=max(max1,v[i]);
               if(m[v[i]]>1){
                   
               }else{
                   cout<<v[i]<<" ";
               }
           }
       }
    }
}