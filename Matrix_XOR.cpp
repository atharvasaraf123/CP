
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
int main()
{
    bolt;
    test
    {
        ll n, m, k;
        cin >> n >> m >> k;
        ll ans = 0;
        ll ini = k + 2;
        for (ll i = 1; i <= n; i++)
        {
            ll x = min(n, i);
            if (x % 2 == 1)
                ans = ans ^ x;
            ini++;
        }
        for (ll i = 2; i <= m; i++)
        {
            ll x = min(m, m - i + 1);
            if (x % 2 == 1)
                ans = ans ^ x;
            ini++;
        }
        cout << ans << endl;
    }
}
