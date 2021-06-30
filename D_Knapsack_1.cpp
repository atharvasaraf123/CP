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
ll go(vi&w,vi&v,ll i,ll cap, vector<vector<ll>>&dp){
    if(i>=v.size()||cap<=0){
        return 0;
    }
    if(dp[i][cap]!=-1)return dp[i][cap];
    if(w[i]<=cap){
        return dp[i][cap]=max(v[i]+go(w,v,i+1,cap-w[i],dp),go(w,v,i+1,cap,dp));
    }
    return dp[i][cap]=go(w,v,i+1,cap,dp);
}
int main(){
    bolt;
    ll n,k;
    cin>>n>>k;
    vector<vector<ll>>dp(n,vector<ll>(k+1,-1));
    vi w(n),v(n);
    for(ll i=0;i<n;i++){
        cin>>w[i]>>v[i];
    }
    cout<<go(w,v,0,k,dp)<<endl;
}