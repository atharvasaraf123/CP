
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
    test
    {
        string a, b;
        cin >> a >> b;
        if (a == b)
        {
            cout << a << endl;
        }
        else
        {
            string c = a;
            string d = b;
            bool flag = false;
            while (1)
            {
                if (c == d)
                {
                    cout << c << endl;
                    break;
                }
                else
                {
                    for (ll i = 0; i < min(c.length(), d.length()); i++)
                    {
                        if (c[i] != d[i])
                        {
                            flag = true;
                            break;
                        }
                    }
                    if (flag)
                    {
                        break;}
                    if (c.length() < d.length())
                    {
                        c = c + a;
                    }
                    else
                    {
                        d = d + b;
                    }
                }
            }
            if (flag)
                {
                    cout << -1 << endl;
                }
        }
    }
}