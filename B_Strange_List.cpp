	
#include <bits/stdc++.h>
using namespace std;
#define bolt ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define test int tt; cin>>tt; while(tt--)
#define ll unsigned long long
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
        ll n,x;cin>>n>>x;
        vector<ll>v(n);
        for(ll i=0;i<n;i++){
            cin>>v[i];
        }
        ll min1=INT_MAX;
        ll pos;
       for(ll i=0;i<n;i++){
           ll a=v[i];
           ll j=0;
           while(a%x==0){
               a=a/x;
               j++;
           }
           if(j<min1){
               min1=j;
               pos=i;
           }
       }
       ll sum=0;
       for(ll i=0;i<v.size();i++){
           sum+=v[i];
       }
       sum=(min1+1)*sum;
       for(ll i=0;i<pos;i++){
           sum+=v[i];
       }
       cout<<sum<<endl;
    }
}