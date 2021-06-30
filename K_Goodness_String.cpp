
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
int x[] = {0, 0, 1, -1};
int y[] = {1, -1, 0, 0};
int dfs(vector<vector<ll>> &v, int i, int j, int val, int r, int c, vector<vector<bool>> &vis)
{
    if (vis[i][j] == false)
    {
        if (i < 0 || i >= r || j < 0 || j >= c)
            return 0;
        vis[i][j] = true;
        if (v[i][j] > val)
            int ans = 0;
        for (int k = 0; k < 4; k++)
        {
            ans += dfs(v, i + x[k], j + y[k], v[i][j], r, c, vis);
        }
    }
    else
    {
        return 0;
    }
}
int main()
{
    bolt;
    test
    {
        ll r, c;
        cin >> r >> c;
        vector<vector<ll>> v(r, vector<ll>(c));
        vector<vector<bool>> vis(r, vector<bool>(c, false));
        ll max1 = INT_MIN;
        ll a, b;
        for (ll i = 0; i < r; i++)
        {
            for (ll j = 0; j < c; j++)
            {
                cin >> v[i][j];
                max1 = max(max1, v[i][j]);
                a = i;
                b = j;
            }
        }
        ll ans = 0;
        dfs(v, a, b);
    }
}