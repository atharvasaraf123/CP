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
bool go(ll i, ll j, ll x, ll y, ll cost, ll k,vector<vector<int>>&dp)
{
    if (i > x || j > y)
        return false;
    if(i==x&&j==y&&cost==k)
        return true;
    if(dp[i][j]==1){
        return true;
    }else if(dp[i][j]==0){
        return false;
    }
    return dp[i][j]=go(i+1,j,x,y,cost+j,k,dp)||go(i,j+1,x,y,cost+i,k,dp);
}
int main()
{
    bolt;
    test
    {
        ll n, m, k;
        cin >> n >> m >> k;
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        if(go(1,1,n,m,0,k,dp)){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}