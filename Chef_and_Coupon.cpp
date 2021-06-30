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
        ll d,c;
        cin>>d>>c;
        ll a1,a2,a3;cin>>a1>>a2>>a3;
        ll b1,b2,b3;cin>>b1>>b2>>b3;
        ll x=(a1+a2+a3+b1+b2+b3+c);
        if(a1+a2+a3<150){
            x+=d;
        }
        if(b1+b2+b3<150){
            x+=d;
        }
        ll y=a1+a2+a3+b1+b2+b3+2*d;

        if(x<y){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}