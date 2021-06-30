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
int main(){
    bolt;
    test{
        ll n;
        cin>>n;
        vector<string>v(n);
        pair<int,int>x,y;
        for(ll i=0;i<n;i++){
            cin>>v[i];
        }
        bool a=false;
        for(ll i=0;i<n;i++){
            for(ll j=0;j<n;j++){
                if(v[i][j]=='*'&&a==false){
                    x.first=i;
                    x.second=j;
                    a=true;
                }else if(v[i][j]=='*'&&a){
                    y.first=i;
                    y.second=j;
                }
            }
        }
        if(x.first==y.first){
            if(x.first+1<n&&y.first+1<n){
                v[x.first+1][x.second]='*';
                v[y.first+1][y.second]='*';
            }else{
                 v[x.first-1][x.second]='*';
                v[y.first-1][y.second]='*';
            }
        }else if(x.second==y.second){
             if(x.second+1<n&&y.second+1<n){
                v[x.first][x.second+1]='*';
                v[y.first][y.second+1]='*';
            }else{
                 v[x.first][x.second-1]='*';
                v[y.first][y.second-1]='*';
            }
        }else{
        v[x.first][y.second]='*';
        v[y.first][x.second]='*';
        }
        for(ll i=0;i<n;i++){
            cout<<v[i]<<endl;
        }
    }
}