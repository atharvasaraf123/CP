	
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
    ll n;cin>>n;
    vector<string>s(n);
    for(ll i=0;i<n;i++){
        cin>>s[i];
    }
    bool ans=false;
    for(ll i=0;i<n;i++){
        string a=s[i];
        if(a[0]=='!'){
            string b=a.substr(1);
            auto it=find(s.begin(),s.end(),b);
            if(it!=s.end()){
                ans=true;
                cout<<b<<endl;
                break;
            }
        }else{
            string b='!'+a;
            auto it=find(s.begin(),s.end(),b);
            if(it!=s.end()){
                ans=true;
                cout<<a<<endl;
                break;
            }
        }
    }
    if(ans==false){
        cout<<"satisfiable";
    }
}