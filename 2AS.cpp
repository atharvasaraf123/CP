	
#include <bits/stdc++.h>
using namespace std;
#define bolt ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define test int tt; cin>>tt; while(tt--)
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
        ll n,k;cin>>n>>k;
        ll a[n],b[n];
        ll sum=0;
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        for(ll i=0;i<n;i++){
            cin>>b[i];
        }
        sort(a,a+n);
        sort(b,b+n,greater<ll>());
        // ll j=0;
        ll i=0;
        while(i!=k){
            if(a[i]<b[i]){
                sum+=b[i];
            }else{
                break;
            }
            i++;
        }
        for(ll j=i;j<n;j++){
            sum+=a[j];
        }
        cout<<sum<<endl;
    }
}