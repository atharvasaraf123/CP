
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
        ll a, b;
        cin >> a >> b;
        string c;
        cin >> c;
        ll k = 0;
        if (a >= 0 && b >= 0)
        {
            for (ll i = 0; i < c.size(); i++)
            {
                if (c[i] != '?')
                {
                    k = i;

                    break;
                }
            }
            ll cost = 0;
            for (ll i = k + 1; i < c.size(); i++)
            {
                if (c[i] == '?')
                {
                    if (i == c.size() - 1)
                    {
                        c[i] = c[i - 1];
                    }
                    else
                    {
                        if (c[i + 1] == '?')
                        {
                            c[i] = c[i - 1];
                        }
                        else
                        {
                            if (c[i + 1] == c[i - 1])
                            {
                                c[i] = c[i - 1];
                            }
                            else
                            {
                                c[i] = c[i + 1];
                            }
                        }
                    }
                }
            }
            for (ll i = k - 1; i >= 0; i--)
            {
                if (c[i] == '?')
                {
                    if (i == 0)
                    {
                        c[i] = c[i + 1];
                    }
                    else
                    {
                        if (c[i - 1] == '?')
                        {
                            c[i] = c[i + 1];
                        }
                        else
                        {
                            if (c[i - 1] == c[i + 1])
                            {
                                c[i] = c[i + 1];
                            }
                            else
                            {
                                c[i] = c[i + 1];
                            }
                        }
                    }
                }
            }
            for (ll i = 1; i < c.size(); i++)
            {
                if (c[i - 1] == 'C' && c[i] == 'J')
                {
                    cost += a;
                }
                if (c[i - 1] == 'J' && c[i] == 'C')
                {
                    cost += b;
                }
            }
            cout << "Case #" << m << ": " << cost << endl;
            m++;
        }else{
            
        }
    }
}