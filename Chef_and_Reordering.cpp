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
int main()
{
    bolt;
    ll t, p;
    cin >> t >> p;
    while (t--)
    {
        ll n, q;
        cin >> n >> q;
        vi v(n + 1, n);
        vi s;
        ll k = 0;
        for (ll i = 0; i < q; i++)
        {
            ll l, r;
            cin >> l >> r;
            for (ll i = l; i <= r; i++)
            {
                v[i] = -1;
                s.pb(i);
            }
        }
        sort(s.begin(), s.end(), greater<ll>());
        for (ll i = 1; i <= n; i++)
        {
            if (v[i] == -1)
            {
                v[i] = s[k];
                k++;
            }
        }
        for (ll i = 1; i <= n; i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
}
