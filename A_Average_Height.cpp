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
int main()
{
    bolt;
    test
    {
        ll n;
        cin >> n;
        vi v(n);
        vi a,b;
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
            if(v[i]%2==0)a.pb(v[i]);
            else b.pb(v[i]);
        }
        for(int i:a){
            cout<<i<<" ";
        }
        for(int i:b){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}