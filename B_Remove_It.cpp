
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
    ll n, m;
    cin >> n >> m;
    vector<ll> v(n);
    vector<ll>ans;
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
        if(v[i]!=m){
            ans.pb(v[i]);
        }
    }
    for(auto it=ans.begin();it!=ans.end();it++){
        cout<<*it<<" ";
    }
}