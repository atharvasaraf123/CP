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
int go(int a, int b, vector<vector<ll>> &parent)
{
    if (parent[a].size() == 0)
    {
        return 0;
    }
    if (b % (parent[a].size()) != 0)
    {
        return b;
    }
    ll x = 0;
    for (ll i = 0; i < parent[a].size(); i++)
    {
        x += go(parent[a][i], b / (parent[a].size()), parent);
    }
    return x;
}
int main()
{
    bolt;
    test
    {
        ll n, k;
        cin >> n >> k;
        if (n % 2 == 0)
        {
            k = k % n;
            if (k == 0)
                k = n;
            cout << k << endl;
        }
        else
        {
            ll first = n / 2 + 1;
            ll sec = first - 1;
            if (k < first)
            {
                cout << k << endl;
            }
            else if (k < n)
            {
                cout << k + 1 << endl;
            }
            else
            {
                ll inc = (k - first) / sec;
                k += inc;
                k++;
                k = k % n;
                if (k == 0)
                    k = n;
                cout << k << endl;
            }
        }
    }
}