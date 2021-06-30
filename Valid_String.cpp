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
int main()
{
    bolt;
    test
    {
        ll n, c;
        cin >> n >> c;
        string s;
        cin >> s;
        ll ind=0;
        for(ll i=0;i<n;i++){
            if(s[i]=='1'){
                s+='1';
                ind=i;
                break;
            }else{
                s+='0';
            }
        }
        ll k=0;
        ll cnt=0;
        for(ll i=ind;i<s.size();i++){
            if(s[i]=='1'){
                if(k>c){
                    cnt++;
                }
                k=0;
            }else{
                k++;
            }
        }
        if(cnt>1){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }
}