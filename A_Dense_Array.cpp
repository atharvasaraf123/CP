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
int count1(float x,float y){
    int a=0;
    while((y/x)>2){
        x=x*2;
        a++;
    }
    // cout<<a<<" ";
    return a;
}
int main(){
    bolt;
    test{
        ll n;cin>>n;
        vector<double>v(n);
        for(ll i=0;i<n;i++){
            cin>>v[i];
        }
        int ans=0;
        for(ll i=0;i<n-1;i++){
            if(max(v[i],v[i+1])/min(v[i],v[i+1])>2.0){
                ans+=count1(min(v[i],v[i+1]),max(v[i],v[i+1]));
            }
        }
        cout<<ans<<endl;
    }
}