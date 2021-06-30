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
    ll k = 1;
    test
    {
        ll n;
        cin >> n;
        vi v(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        ll cnt = 0;
        bool op = false;
        ll max1 = INT_MIN;
        for (ll i = 0; i < n - 1; i++)
        {
            op = false;
            ll diff = v[i + 1] - v[i];
            vector<int> temp(all(v));
            cnt = 0;
            for (ll j = i + 1; j < n; j++)
            {
                if (temp[j] - temp[j - 1] == diff)
                {
                    cnt++;
                    max1 = max(max1, cnt);
                }
                else
                {
                    if (op == false)
                    {
                        if (j != n - 1)
                        {
                            if (temp[j - 1] + 2 * diff == temp[j + 1])
                            {
                                temp[j] = temp[j - 1] + diff;
                                cnt++;
                                max1 = max(max1, cnt);
                                op = true;
                            }
                            else
                            {
                                if (j - i == 2 && v[j + 1] - v[j] == v[j] - v[j - 1])
                                {
                                    diff = v[j] - v[j - 1];
                                    v[i] = v[i + 1] - diff;
                                    cnt++;
                                    max1 = max(max1, cnt);
                                    op = true;
                                }
                                else
                                {
                                    temp[j] = temp[j - 1] + diff;
                                    cnt++;
                                    max1 = max(max1, cnt);
                                    op = true;
                                }
                            }
                        }
                        else
                        {
                            temp[j] = temp[j - 1] + diff;
                            cnt++;
                            max1 = max(max1, cnt);
                            op = true;
                        }
                    }
                    else
                    {
                        break;
                    }
                }
            }
        }
        cout << "Case #" << k << ": ";
        cout << max1 + 1 << endl;
        k++;
    }
}