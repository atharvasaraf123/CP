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
    unordered_set<ll>s;
    for(ll i=1;i<=10000;i++){
        s.insert(i*i*i);
    }
    test{
        ll x;
        cin>>x;
        bool ans=false;
        for(ll i=1;i<=10000;i++){
            ll k=i*i*i;
            if(k<x){
                if(s.find(x-k)!=s.end()){
                    ans=true;
                    break;
                }
            }
        }
        if(ans)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}