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
ll go(int i, vector<vector<ll>> &v, vector<bool> &vis, int n, vector<int> &dp)
{
    ll ans = 0;
    if (dp[i] != -1)
        return dp[i];
    for (ll j = 0; j < v[i].size(); j++)
    {
        if (vis[v[i][j]] == false)
        {
            vis[v[i][j]] = true;
            ans = max(ans, 1 + go(v[i][j], v, vis, n, dp));
            vis[v[i][j]] = false;
        }
    }
    return dp[i] = ans;
}
int main()
{
    bolt;
    ll n, m;
    cin >> n >> m;
    vector<vector<ll>> v(n);
    for (ll i = 0; i < m; i++)
    {
        ll x, y;
        cin >> x >> y;
        v[x - 1].pb(y-1);
    }
    ll ans = 0;
    vector<int> dp(n, -1);
    for (ll i = 0; i < n; i++)
    {
        vector<bool> vis(n, false);
        vis[i] = true;
        ans = max(ans, go(i, v, vis, n, dp));
        //  cout<<ans<<endl;
    }
    cout << ans << endl;
}