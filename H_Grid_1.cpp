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
template <typename T>
istream &operator>>(istream &input, vector<T> &data)
{
    for (T &x : data)
        input >> x;
    return input;
}
template <typename T>
ostream &operator<<(ostream &output, const vector<T> &data)
{
    for (const T &x : data)
        output << x << " ";
    return output;
}
template <typename T>
ostream &operator<<(ostream &output, const set<T> &data)
{
    for (auto it : data)
        output << it << " ";
    return output;
}
template <typename T>
ostream &operator<<(ostream &output, const unordered_set<T> &data)
{
    for (auto it : data)
        output << it << " ";
    return output;
}
template <typename T, typename S>
ostream &operator<<(ostream &output, const map<T, S> &data)
{
    for (auto it : data)
        output << it.first << " " << it.second << endl;
    return output;
}
template <typename T, typename S>
ostream &operator<<(ostream &output, const unordered_map<T, S> &data)
{
    for (auto it : data)
        output << it.first << " " << it.second << endl;
    return output;
}
template <typename T, typename S>
ostream &operator<<(ostream &output, const pair<T, S> &data)
{
    output << data.first << " " << data.second << endl;
    return output;
}
ll go(vector<string>&v,int i,int j,int n,int m,vector<vector<ll>>&dp){
    if(i>=n||j>=m||v[i][j]=='#'){
        return 0;
    }
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    if(i==n-1&&j==m-1){
        return 1;
    }
    return dp[i][j]=(go(v,i+1,j,n,m,dp)+go(v,i,j+1,n,m,dp))%mod;
}
int main(){
    bolt;
    ll n,m;
    cin>>n>>m;
    vector<string>v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    vector<vector<ll>>dp(n,vi(m,-1));
    cout<<go(v,0,0,n,m,dp);
}