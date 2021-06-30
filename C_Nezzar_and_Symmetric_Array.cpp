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
        vector<ll>v(2*n);
        for(ll i=0;i<2*n;i++){
            cin>>v[i];
        }
        sort(all(v),greater<ll>());
        vector<ll>w(n);
        bool flag=false;
        for(ll i=0;i<2*n;i=i+2){
            if(v[i]!=v[i+1]){
                flag=true;
                break;
            }
            w[i/2]=v[i];
        }
        if(flag){
            cout<<"NO"<<endl;
        }else{
            // for(ll i=0;i<n;i++){
            //     cout<<w[i]<<" ";
            // }
            // cout<<endl;
            vector<ll>ans(n,0);
            ll k=2*n;
            ll sum=0;
            for(ll i=0;i<n;i++){
                //   cout<<w[i]<<" "<<k<<" "<<sum<<" hello"<<endl;
                if((w[i]-sum)%k!=0){
                    flag=true;
                    break;
                }
                ans[i]=((w[i]-sum)/k);
                sum+=2*ans[i];
                k=k-2;
            }
            if(flag){
                cout<<"NO"<<endl;
            }else{
                ll i=0;
                for(;i<n;i++){
                    // cout<<ans[i]<<" ";
                    if(ans[i]<=0){
                        cout<<"NO"<<endl;
                        break;
                    }
                    if(i<n-1 && ans[i]==ans[i+1]){
                         cout<<"NO"<<endl;
                        break;
                    }
                }
                if(i==n){
                    cout<<"YES"<<endl;
                }
                // cout<<endl;
            }
        }
    }
}