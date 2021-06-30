	
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
void func(unordered_set<ll>&set1,vector<ll>v,vector<ll>w,int a){
    for(ll i=0;i<v.size();i++){
        if(set1.find(v[i]|a)==set1.end()){
            set1.insert(v[i]|a);
            func(set1,v,w,v[i]|a);
        }
    }
    for(ll i=0;i<w.size();i++){
        if(set1.find(w[i]&a)==set1.end()){
            set1.insert(w[i]&a);
            func(set1,v,w,w[i]&a);
        }
    }
}
int main()
{
    bolt;
    test{
        ll n,m;
        cin>>n>>m;
        vector<ll>v(n),w(m);
        for(ll i=0;i<n;i++){
            cin>>v[i];
        }
        for(ll i=0;i<m;i++){
            cin>>w[i];
        }
        unordered_set<ll>set1;
        set1.insert(0);
        func(set1,v,w,0);
        cout<<set1.size()<<endl;
    }
}