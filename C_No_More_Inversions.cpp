
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
        ll n,k;
        cin>>n>>k;
        if(n-k==0){
            ll x=1;
            for(ll i=0;i<k;i++){
                cout<<x<<" ";
                x++;
            }
            cout<<endl;
        }else if(n-k==1){
            ll x=1;
            for(ll i=0;i<k-2;i++){
                cout<<x<<" ";
                x++;
            }
            cout<<x+1<<" "<<x<<endl;
        }else{
            ll x=1;
            for(ll i=0;i<k;i++){
                cout<<x<<" ";
                x++;
            }
        }
    }
}