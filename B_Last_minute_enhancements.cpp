	
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
        ll n;cin>>n;
        vector<ll>v(n);
        sort(all(v));
        for(ll i=0;i<n;i++){
            cin>>v[i];
        }
        set<int>s;
        for(int i=0;i<n;i++){
            if(s.find(v[i])==s.end()){
                // cout<<v[i]<<"abc";
                s.insert(v[i]);
            }else if(s.find(v[i]+1)==s.end()){
                // cout<<v[i]+1<<"def";
                s.insert(v[i]+1);
            }
        }
        cout<<s.size()<<endl;
    }
}