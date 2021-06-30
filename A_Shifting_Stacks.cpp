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
        ll n;cin>>n;
        vi v(n);
        for(ll i=0;i<n;i++)cin>>v[i];
        bool ans=false;
        vector<ll>pre(n,0);
        pre[0]=v[0];
        for(ll i=1;i<n;i++){
            pre[i]=pre[i-1]+v[i];
        }
        bool a=false;
        for(ll i=1;i<n;i++){
            if(pre[i]<((i)*(i+1)/2)){
                // cout<<pre[i]<<" "<<(i)*(i+1)/2<<endl;
                a=true;
                break;
            }
        }
        if(a){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }
}