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
        ll n;cin>>n;
        string a;
        cin>>a;
        vector<ll>zero(n,0);
        vector<ll>one(n,0);
        if(a[0]=='0')zero[0]++;else one[0]++;
        for(ll i=1;i<n;i++){
            if(a[i]=='0'){
                zero[i]=zero[i-1]+1;
                one[i]=one[i-1];
            }else{
                one[i]=one[i-1]+1;
                zero[i]=zero[i-1];
            }
        }
        ll max1=0;
        // for(ll i=0;i<n;i++){
        //     cout<<zero[i]<<" ";
        // }
        // cout<<endl;
        // for(ll i=0;i<n;i++){
        //     cout<<one[i]<<" ";
        // }
        // cout<<endl; 
        for(ll i=0;i<n;i++){
            max1=max(zero[i]+one[n-1]-one[i],max1);
        }
        cout<<n-max1<<endl;
    }
}