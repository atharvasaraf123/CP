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
#define allr(v) v.rbegin(), v.rend()
int main(){
    bolt;
    test{
        string a;cin>>a;
        map<char,int>mapp;
        for(ll i=0;i<a.length();i++){
            mapp[a[i]]++;
        }
        ll k=0;
        ll m=0;
        for(auto it=mapp.begin();it!=mapp.end();it++){
            // cout<<it->first<<" "<<it->second<<endl;
            if((it->second)%2==1){
                m+=(it->second)/2;
                k++;
            }else{
                m+=(it->second)/2;
            }
        }
        // cout<<m<<" "<<k<<endl;
        if(m>=k){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}