	
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
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        ll move=0;
        while(n!=0){
            if(n%k==0){
                move++;
                n/=k;
            }else{
                n=n-n%k;
                move+=n%k;
            }
        }
        cout<<move<<endl;
    }    
}