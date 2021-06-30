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
        ll len;
        cin >> len;
        string a, b;
        cin >> a >> b;
        vector<ll> ones(len, 0);
        ll cnt1 = 0, cnt2 = 0;
        for (ll i = 0; i < len; i++)
        {
            if (a[i] == '0')
            {
                cnt1++;
                ones[i] = cnt1;
            }
            else
            {
                if (i != 0)
                    ones[i] = ones[i - 1];
            }
            if (b[i] == '0')
                cnt2++;
        }
        if (cnt1 != cnt2)
        {
            cout << "NO" << endl;
        }
        else
        {
            bool flag = false;
            bool chk = false;
            ll i;
            for (i = len - 1; i >= 0; i--)
            {
                if (chk == false)
                {
                    if (a[i] != b[i])
                    {
                        if (ones[i] * 2 == i + 1)
                        {
                            chk = true;
                        }
                        else
                        {
                            flag = true;
                            break;
                        }
                    }
                }
                else
                {
                    if (a[i] == b[i])
                    {
                        if (ones[i] * 2 == i + 1)
                        {
                            chk = false;
                        }
                        else
                        {
                            flag = true;
                            break;
                        }
                    }
                }
            }
            if (flag == false)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
}