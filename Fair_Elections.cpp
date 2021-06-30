	
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
        ll n,m;cin>>n>>m;
        vector<ll>a(n);
        vector<ll>b(m);
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        for(ll i=0;i<m;i++){
            cin>>b[i];
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end(),greater<int>());
        ll sumA=accumulate(a.begin(),a.end(),0);
        ll sumB=accumulate(b.begin(),b.end(),0);
        ll swaps=0;
        ll i=0;
        while(sumA<=sumB && i<min(n,m)){
            swaps++;
            sumA-=a[i];
            sumA+=b[i];
            sumB-=b[i];
            sumB+=a[i];
            i++;
        }
        if((i==min(n,m)) && (sumA<=sumB)){
            cout<<-1<<endl;
        }else
        cout<<swaps<<endl;
    }
}