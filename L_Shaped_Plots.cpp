
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

int hor(vector<vector<ll>> &v, int i, int j, int r, int c, bool right)
{
    if (right)
    {
        ll ans = 0;
        for (ll k = j; k < c; k++)
        {
            if (v[i][k] == 1)
            {
                ans++;
            }
            else
            {
                break;
            }
        }
        return ans;
    }
    else
    {
        int ans = 0;
        for (ll k = j; k >= 0; k--)
        {
            if (v[i][k] == 1)
            {
                ans++;
            }
            else
            {
                break;
            }
        }
        return ans;
    }
}
int ver(vector<vector<ll>> &v, int i, int j, int r, int c, bool up)
{
    if (up)
    {
        ll ans = 0;
        for (ll k = i; k >= 0; k--)
        {
            if (v[k][j] == 1)
                ans++;
            else
                break;
        }
        return ans;
    }
    else
    {
        ll ans = 0;
        for (ll k = i; k < r; k++)
        {
            if (v[k][j] == 1)
                ans++;
            else
                break;
        }
        return ans;
    }
}

int cnt(vector<vector<ll>> &v, int i, int j, int r, int c)
{
    if (v[i][j] == 0)
        return 0;
    int a = hor(v, i, j, r, c, true);
    int b = hor(v, i, j, r, c, false);
    int c1 = ver(v, i, j, r, c, true);
    int d = ver(v, i, j, r, c, false);
    ll ans = 0;
    if (a != 0 && c1 != 0)
    {
        for (ll k = 2; k <= a; k++)
        {
            if ((2 * k) <= c1)
            {
                ans++;
            }
            else
            {
                break;
            }
        }
        for (ll k = 2; k <= c1; k++)
        {
            if ((2 * k) <= a)
            {
                ans++;
            }
            else
            {
                break;
            }
        }
    }
    if (a != 0 && d != 0)
    {
        for (ll k = 2; k <= a; k++)
        {
            if ((2 * k) <= d)
            {
                ans++;
            }
            else
            {
                break;
            }
        }
        for (ll k = 2; k <= d; k++)
        {
            if ((2 * k) <= a)
            {
                ans++;
            }
            else
            {
                break;
            }
        }
    }
    if (b != 0 && c1 != 0)
    {
        for (ll k = 2; k <= b; k++)
        {
            if ((2 * k) <= c1)
            {
                ans++;
            }
            else
            {
                break;
            }
        }
        for (ll k = 2; k <= c1; k++)
        {
            if ((2 * k) <= b)
            {
                ans++;
            }
            else
            {
                break;
            }
        }
    }
    if (a != 0 && d != 0)
    {
        for (ll k = 2; k <= b; k++)
        {
            if ((2 * k) <= d)
            {
                ans++;
            }
            else
            {
                break;
            }
        }
        for (ll k = 2; k <= d; k++)
        {
            if ((2 * k) <= b)
            {
                ans++;
            }
            else
            {
                break;
            }
        }
    }
    return ans;
}

int main()
{
    bolt;
    int f = 1;
    test
    {
        ll r, c;
        cin >> r >> c;
        vector<vector<ll>> v(r, vector<ll>(c));
        for (ll i = 0; i < r; i++)
        {
            for (ll j = 0; j < c; j++)
            {
                cin >> v[i][j];
            }
        }
        ll ans = 0;
        for (ll i = 0; i < r; i++)
        {
            for (ll j = 0; j < c; j++)
            {
                ans += cnt(v, i, j, r, c);
            }
        }
        cout << "Case #" << f << ": " << ans << endl;
        f++;
    }
}