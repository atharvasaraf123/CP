
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
    test
    {
        ll n;
        cin >> n;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
            cin >> v[i];
        sort(all(v));
        ll x=v[0],y=v[n-1];
        ll max1=INT_MIN;
        for(ll i=1;i<n-1;i++){
            max1=max(max1,abs(x-y)+abs(x-v[i])+abs(y-v[i]));
        }
        cout<<max1<<endl;
    }
}