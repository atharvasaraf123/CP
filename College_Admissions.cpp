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
        ll n,m;cin>>n>>m;
        vector<ll>rankClg(n);
        for(ll i=0;i<n;i++)cin>>rankClg[i];
        vector<pair<ll,ll>>rankStud(m);
        for(ll i=0;i<m;i++)
        {cin>>rankStud[i].first;
        rankStud[i].second=i;}
        sort(rankStud.begin(),rankStud.end());
        vector<vector<ll>>apply(m);
        for(ll i=0;i<m;i++){
            ll k;
            cin>>k;
            vector<ll>v(k);
            for(ll j=0;j<k;j++){
                cin>>v[i];
            }
            apply[i]=v;
        }
        vector<ll>done(n,0);
        ll i=0;
        while(rankStud[i].second!=0){
            ll ind=rankStud[i].second;
            vector<ll>app=apply[ind];
            for(ll j=0;j<app.size();j++){
                if(done[app[j]-1]==0){
                    done[app[j]-1]=1;
                    break;
                }
            }
            i++;
        }
        ll ind=rankStud[i].first;
        vector<<ll>app



    }
}