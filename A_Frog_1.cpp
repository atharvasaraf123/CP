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
int go(vector<ll>&v,ll i,vector<int>&dp){
    if(i>=v.size()){
        return INT_MAX;
    }
    if(i==v.size()-1){
        return 0;
    }
    if(dp[i]!=-1){
        return dp[i];
    }
    ll c=INT_MAX,d=INT_MAX;
    if(i+1<v.size()){
        c=abs(v[i]-v[i+1])+go(v,i+1,dp);
    }
    if(i+2<v.size()){
        d=abs(v[i]-v[i+2])+go(v,i+2,dp);
    }
    return dp[i]=min(c,d);
}
int main(){
    bolt;
    ll n;
    cin>>n;
    vector<int>dp(n,-1);
    vi v(n);
    cin>>v;
    cout<<go(v,0,dp)<<endl;
    
}