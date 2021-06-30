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
        ll n;cin>>n;
        vector<string>v(n);
        for(ll i=0;i<n;i++) cin>>v[i];
        unordered_set<string>s;
        for(ll i=0;i<n;i++) s.insert(v[i]);
        ll ans=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(v[i][0]==v[j][0]) continue;
                if(s.find(v[i][0]+v[j].substr(1))==s.end() && s.find(v[j][0]+v[i].substr(1))==s.end()){
                    cout<<v[i]<<" "<<v[j]<<" "<<endl;
                
                    ans+=2;
                }
            }
        }
        cout<<ans<<endl;
    }
}