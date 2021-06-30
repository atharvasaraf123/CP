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
#define lli long long
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
        ll n;
        cin>>n;
        ll y;cin>>y;
        vector<ll>ans(10,-1);
        int i=0;
        vector<ll>v(n);
        for(ll i=0;i<n;i++){
            cin>>v[i];
        }
        ll d=y;
        ll x=*max_element(all(v));
        // cout<<x;
        while(i<10){
            // cout<<"a";
            if(ans[d%10]==-1){
                i++;
                ans[d%10]=d;
            }
            d=d+y;
            if(d>y*10){
                break;
            }
        }
        for(int i=0;i<10;i++){
            if(ans[i]==-1){
                ans[i]=y*10+i;
            }
        }
        //  for(int i=0;i<10;i++){
        //     cout<<ans[i]<<" ";
        // }
        for(ll i=0;i<n;i++){
            if(ans[v[i]%10]==-1){
                cout<<"NO"<<endl;
            }
            else if(v[i]>=ans[v[i]%10]){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }

    }
}