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
ld go(vector<ld> &v, int i, int h, int t,vector<vector<ld>> &dp)
{
    if (i > v.size())
    {
        return 0;
    }
    
    if (i == v.size() && h > t)
    {
        return 1;
    }
    else if (i == v.size())
    {
        return 0;
    }
    if (dp[i][h] != -1)
        return dp[i][h];
    return dp[i][h] = go(v, i + 1, h + 1, t, dp) * v[i] + go(v, i + 1, h, t + 1, dp) * (1 - v[i]);
}
int main()
{
    ll n;
    cin >> n;
    // cout<<n<<endl;
    vector<ld> v(n);
    vector<vector<ld>> dp(n+1,vector<ld>(n+1,-1));
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    // for(ll i=0;i<n;i++){
    //     cout<<v[i]<<" ";
    // }
    cout << setprecision(10) << go(v, 0, 0, 0, dp) << endl;
}