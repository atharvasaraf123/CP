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
int main(){
    bolt;
    test{
        ll n;cin>>n;
        vector<ll>v(n);
        map<int,int>m;
        for(ll i=0;i<n;i++){
            cin>>v[i];
            m[v[i]]++;
        }
        ll ans;
        for(auto it=m.begin();it!=m.end();it++){
            if(it->second==1){
                ans=it->first;
                break;
            }
        }
        for(int i=0;i<n;i++){
            if(v[i]==ans){
                cout<<i+1<<endl;
                break;
            }
        }

    }
}