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
#define lli long long
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
        ll a,b;
        cin>>a>>b;
        set<ll>a;
        for(ll i=0;i<a;i++){
            ll x;
            cin>>x;
            a.insert(x);
        }
        ll c=-1,d=-1;
        for(auto it=a.begin();it!=a.end();it++){
            auto it1=a.find(b^(*it));
            if(it1!=a.end()){
                c=*it1;
                d=*it;
                break;

            }
        }
        if(c!=-1){
            cout<<-1<<endl;
        }else{
            cout<<c<<" "<<d;
        }
    }
}