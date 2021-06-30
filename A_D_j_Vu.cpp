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
bool isPalidrome(string s){
    for(ll i=0;i<s.size()/2;i++){
        if(s[i]!=s[s.size()-i-1]){
            return false;
        }
    }
    return true;
}
int main(){
    bolt;
    test{
        string s;cin>>s;
        bool flag=false;
        for(ll i=0;i<s.size();i++){
            if(s[i]!='a'){
                flag=true;
                break;
            }
        }
        if(flag==false){
            cout<<"NO"<<endl;
        }else{
            bool flag=false;
            for(ll i=s.size()-1;i>=-1;i--){
                string c=s.substr(0,i+1)+'a'+s.substr(i+1,s.size()-i);
                if(isPalidrome(c)==false){
                    cout<<"YES"<<endl;
                    cout<<c<<endl;
                    flag=true;
                    break;
                }
            }
            if(!flag)cout<<"NO"<<endl;
        }
    }
}

