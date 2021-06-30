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
        ll x,y;cin>>x>>y;
        string s;
        cin>>s;
        ll l=0,r=0,u=0,d=0;
        for(ll i=0;i<s.length();i++){
            if(s[i]=='L'){
                l++;
            }else if(s[i]=='R'){
                r++;
            }else if(s[i]=='U'){
                u++;
            }else{
                d++;
            }
        }
        ll ans=0;
        if(x>0 && r>=x ){
            ans++;
        }
        if(x<0 && l>=abs(x)){
            ans++;
        }
        if(x==0) ans++;
        if(y>0 && u>=y ){
            ans++;
        }
        if(y<0 && d>=abs(y)){
            ans++;
        }
        if(y==0) ans++;
        if(ans==2)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}