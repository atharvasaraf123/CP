	
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
    vector<pair<char,char>>v;
    for(ll i=0;i<3;i++){
        string a;
        cin>>a;
        if(a[1]=='>'){
            v.pb(make_pair(a[0],a[2]));
        }else{
            v.pb(make_pair(a[2],a[0]));
        }
    }
    if(v[0].first==v[1].first){
        cout<<v[2].second<<v[2].first<<v[0].first<<endl;
    }else if(v[1].first==v[2].first){
        cout<<v[0].second<<v[0].first<<v[1].first<<endl;
    }else if(v[0].first==v[2].first){
        cout<<v[1].second<<v[1].first<<v[0].first<<endl;
    }else{
        cout<<"Impossible"<<endl;
    }

  }