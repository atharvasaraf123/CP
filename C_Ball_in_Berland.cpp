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
int main()
{
    bolt;
    test{
        ll a,b,k;cin>>a>>b>>k;
        vector<pair<ll,ll>>v(k);
        map<ll,ll>mapp1,mapp2;
        for(ll i=0;i<k;i++){
            cin>>v[i].first;
            mapp1[v[i].first]++;
        }
        for(ll i=0;i<k;i++){
            cin>>v[i].second;
            mapp2[v[i].second]++;
        }
        ll ans=k*(k-1)/2;
        for(auto it:mapp1){
            ans-=((it.second)*(it.second-1)/2);
        }
        for(auto it:mapp2){
            ans-=((it.second)*(it.second-1)/2);
        }
        cout<<ans<<endl;
    }
}