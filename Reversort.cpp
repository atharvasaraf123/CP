
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
    ll n;
    cin >> n;
    ll k;
    cin >> k;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        v[i] = i + 1;
    }
    set<int> s;
    do
    {
        ll cost = 0;
        vector<ll> v1(v.begin(), v.end());
        for (ll i = 0; i < v1.size() - 1; i++)
        {
            auto it = min_element(v1.begin() + i, v1.end());
            reverse(v1.begin() + i, it + 1);
            cost = cost + (it + 1) - (v1.begin() + i);
        }
        if (k == cost)
        {
            for (ll i = 0; i < v.size(); i++)
            {
                cout << v[i] << " ";
            }
            cout << endl;
        }
    } while (next_permutation(all(v)));
    cout << endl;
}

