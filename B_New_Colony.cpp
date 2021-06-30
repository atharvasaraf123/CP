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
int main(){
    bolt;
    test{
       ll n,k;cin>>n>>k;
       vector<ll>v(n);
       for(ll i=0;i<n;i++)cin>>v[i];
       bool flag=false;
       ll y;
       for(ll i=0;i<k;i++){
           ll j=0;
           for(;j<n-1;j++){
               if(v[j]<v[j+1]){
                   break;
               }
           }
           if(j==n-1){
               flag=true;
               break;
           }
           v[j]++;
           y=j;
       }
       if(flag){
           cout<<-1<<endl;
       }else{
           cout<<y+1<<endl;
       }
    }
}