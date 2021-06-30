
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
bool isPrime(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    bolt;
    ll t;
    cin >> t;
    vector<int> v(t);
    for (ll i = 0; i < t; i++)
    {
        cin >> v[i];
    }
    ll x = *max_element(all(v));
    vector<ll> ans(x + 1, 0);
    ll k = 0;
    for (int i = 3; i <= x - 2; i++)
    {
        if (isPrime(i + 2)&&isPrime(i))
        {
            k++;
        }
        ans[i + 2] = k;
    }
    for (int i = 0; i < t; i++)
    {
        cout << ans[v[i]] << endl;
    }
}