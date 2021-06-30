
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
    int m = 1;
    test
    {
        ll n, k;
        cin >> n >> k;
        if (k < (n - 1))
        {
            cout << "Case #" << m << ": IMPOSSIBLE" << endl;
            m++;
        }
        else
        {

            vector<ll> v(n);
            bool flag = false;
            for (ll i = 1; i <= n; i++)
                v[i - 1] = i;
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
                // for (ll i = 0; i < v.size(); i++)
                // {
                //     cout << v[i] << " ";
                // }
                // cout << endl;
                // cout << cost << endl;
                if (cost == k)
                {
                    flag = true;
                    break;
                }
            } while (next_permutation(all(v)));
            if (flag)
            {
                cout << "Case #" << m << ": ";
                for (ll i = 0; i < n; i++)
                {
                    cout << v[i] << " ";
                }
                cout << endl;
                m++;
            }
            else
            {
                cout << "Case #" << m << ": IMPOSSIBLE" << endl;
                m++;
            }
        }
    }
}