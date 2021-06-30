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
vector<vector<int>> dp;
int go(vector<ll> &v, int i, int m, int sum, vector<ll> &p)
{
    if (sum >= m)
    {
        return 0;
    }
    if (i >= v.size())
    {
        return 1000000000;
    }
    if (dp[i][sum] != -1)
    {
        return dp[i][sum];
    }
    int y = p[i] + go(v, i + 1, m, sum + v[i], p);
    int x = go(v, i + 1, m, sum, p);
    return dp[i][sum] = min(x, y);
}
int main()
{
    bolt;
    test
    {
        ll n, m;
        cin >> n >> m;
        vector<ll> v(n), p(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        dp.clear();
        dp.resize(n + 1, vector<int>(accumulate(all(v), 0), -1));
        for (ll i = 0; i < n; i++)
        {
            cin >> p[i];
        }
        ll x = go(v, 0, m, 0, p);
        if (x == 1000000000)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << x << endl;
        }
    }
}