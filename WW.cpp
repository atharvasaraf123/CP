	
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
        ll n;
        cin>>n;
        ll a[n],b[n];
        ll disntA[n];
        ll disnB[n];
        disntA[0]=0;
        disnB[0]=0;
        cin>>a[0]>>a[1];
         disntA[1]=a[0];
        for(ll i=2;i<n;i++){
            cin>>a[i];
            disntA[i]=a[i-1]+disntA[i-1];
        }
        cin>>b[0]>>b[1];
        disnB[1]=b[0];
        for(ll j=2;j<n;j++){
            cin>>b[j];
            disnB[j]=b[j-1]+disnB[j-1];
        }
        ll sum=0;
        for(ll i=0;i<n;i++){
            if(a[i]==b[i] && disnB[i]==disntA[i]){
                sum+=a[i];
            }
        }
        cout<<sum<<endl;
    }
   }