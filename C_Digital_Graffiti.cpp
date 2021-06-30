
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
int max1;
void go(vector<string>&v,int i,int j,int turn,vector<vector<bool>>&visited){
    if(i>=v.size() || j>=v[i].size()){
        return;
    }
    if(v[i][j]=='.'&& visited[i][j]==false){
        visited[i][j]=true;
        go(v,i+1,j,0,visited);
        go(v,i,j+1,0,visited);
        go(v,i-1,j,0,visited);
        go(v,i,j-1,0,visited);
    }else if(v[i][j]=='#' && visited[i][j]==false){
        visited[i][j]=true;
        max1=max(max1,turn);
        go(v,i+1,j,turn,visited);
        go(v,i,j+1,turn+1,visited);
        go(v,i-1,j,turn,visited);
        go(v,i,j-1,turn+1,visited);
    }
}
int main()
{
    bolt;
    ll n,m;
    cin>>n>>m;
    max1=INT_MIN;
    vector<vector<bool>>visited(n,vector<bool>(m,false));
    vector<string>v(n);
    for(ll i=0;i<n;i++)cin>>v[i];
    go(v,0,0,0,visited);
    cout<<max1<<endl;
}