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
        ll n,k;cin>>n>>k;
        vector<ll>v(n);
        for(ll i=0;i<n;i++)cin>>v[i];
        sort(all(v));
        multiset<int>m;
        for(ll i=n-1;i>=0;i--){
           auto it=m.lower_bound(v[i]);
            if(it==m.end()){
                m.insert(k-v[i]);
            }else{
                ll x=*it;
                m.erase(it);
                m.insert(*it-v[i]);
            }
        }
        cout<<m.size()<<endl;
    }
}