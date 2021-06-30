
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
        ll n;
        cin>>n;
        multiset<int>s;
        ll x;
        for(ll i=0;i<2*n;i++){
            cin>>x;
            s.insert(x);
        }
        while(!s.empty()){
            auto it=--s.end();
            auto it2=--it;
            int x=*(it)-*(it2);
            if(s.find(x)!=s.end()){
                
            }else{
                break;
            }
        }
    }
}