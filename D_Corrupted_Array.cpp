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
        ll n;
        cin>>n;
        vector<ll>a(n),b(n+2);
        ll sum=0;
        for(ll i=0;i<n+2;i++){
            cin>>b[i];
            sum+=b[i];
        }
        sort(b.begin(),b.end());
        ll x=b[n+1];
        ll y=b[n];
        // ll sum=accumulate(b.begin(),b.end(),0);
        sum-=x;
        ll k=-1;
        for(ll i=0;i<n+1;i++){
            if(sum-b[i]==x){
                k=i;
                break;
            }
        }
        if(k!=-1){
            for(ll i=0;i<n+1;i++){
                if(i!=k){
                    cout<<b[i]<<" ";
                }
            }
            cout<<endl;
        }else{
            sum+=x;
            sum-=b[n];
            for(ll i=0;i<n+2;i++){
                if(i!=n){
                    if(sum-b[i]==y){
                        k=i;
                        break;
                    }
                }
            }
            if(k!=-1){
                for(ll i=0;i<n+2;i++){
                    if(i!=n&&i!=k){
                        cout<<b[i]<<" ";
                    }
                }
                cout<<endl;
            }else{
                cout<<-1<<endl;
            }
            
        }
    }
}