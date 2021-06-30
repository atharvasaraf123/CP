	
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
    ll n;
    cin>>n;
    ll a=sqrt(n);
    a++;
    ll j=1;
    if(a*(a-1)>n){
        cout<<2*a-1<<endl;
    }else{
        cout<<2*a<<endl;
    }
}