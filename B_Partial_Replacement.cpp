
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
        ll n,k;cin>>n>>k;
        string a;cin>>a;
        ll ans=0;
        ll o=-1,p=-1;
        for(ll i=0;i<a.size();i++){
            if(a[i]=='*'){
                a[i]='x';
                o=i;
                ans++;
                break;
            }
        }
        for(ll i=a.size()-1;i>=0;i--){
            if(a[i]=='*'){
                a[i]='x';
                ans++;
                p=i;
                break;
            }
        }
        if(o==-1 || p==-1){
            cout<<ans<<endl;
        }else{
            string an=a.substr(o+1,p-o-1);
            ll ind=k-1;
            ll j=0;
            while(an.size()>=k){
            for(ll i=ind;i>=0;i--){
                if(an[i]=='*'){
                    j=i;

                    ans++;
                    break;
                }
            }
            an=an.substr(j+1);}
            cout<<ans<<endl;

        }
    }
}