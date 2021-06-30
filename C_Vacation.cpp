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
int go(vi&a,vi&b,vi&c,ll i,ll last, vector<vector<ll>>&dp){
    if(i>=a.size()){
        return 0;
    }
    ll x=INT_MIN,y=INT_MIN,z=INT_MIN;
    if(last!=-1&&dp[i][last]!=-1){
        return dp[i][last];
    }
    if(last!=0){
        x=a[i]+go(a,b,c,i+1,0,dp);
    }
    if(last!=1){
        y=b[i]+go(a,b,c,i+1,1,dp);
    }
    if(last!=2){
        z=c[i]+go(a,b,c,i+1,2,dp);
    }
    if(last!=-1){
       return dp[i][last]=max(x,max(y,z));
    }
    return max(x,max(y,z));
}
int main(){
    ll n;
    cin>>n;
    vi a(n);vi b(n);vi c(n);
    vector<vector<ll>>dp(n,vector<ll>(3,-1));
    for(ll i=0;i<n;i++){
        cin>>a[i]>>b[i]>>c[i];
    }
    cout<<go(a,b,c,0,-1,dp);
}