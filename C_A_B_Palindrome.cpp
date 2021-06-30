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
void fun()
{
    ll a, b;
    cin >> a >> b;
    string s;
    cin >> s;
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
            a--;
        if (s[i] == '1')
            b--;
    }
    for (int i = 0; i < n; i++)
    {
        if (s[i] != s[n - i - 1])
        {
            if (s[i] == '?')
            {
                s[i] = s[n - i - 1];
                if (s[i] == '0')
                    a--;
                if (s[i] == '1')
                    b--;
            }
            else if (s[n - i - 1] == '?')
            {
                s[n - i - 1] = s[i];
                if (s[i] == '0')
                    a--;
                if (s[i] == '1')
                    b--;
            }
            else
            {
                cout << -1 << endl;
                return;
            }
        }
    }
    if (a < 0 || b < 0)
    {
        cout << -1 << endl;
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '?')
        {
            if (i == n - i - 1)
            {
                if (a > 0)
                {
                    s[i] = s[n - i - 1] = '0';
                    a--;
                }
                else if (b > 0)
                {
                    s[i] = s[n - i - 1] = '1';
                    b--;
                }
                else
                {
                    cout << -1 << endl;
                    return;
                }
            }
            else
            {
                if (a > 1)
                {
                    s[i] = s[n - i - 1] = '0';
                    a -= 2;
                }
                else if (b > 1)
                {
                    s[i] = s[n - i - 1] = '1';
                    b -= 2;
                }
                else
                {
                    cout << -1 << endl;
                    return;
                }
            }
        }
    }
    if (a != 0 || b != 0)
    {
        cout << -1 << endl;
        return;
    }
    cout << s << endl;
}
int main()
{
    bolt;
    test
    {
        ll a, b;
        cin >> a >> b;
        string s;
        cin >> s;
        ll z = 0, o = 0, q = 0;
        for (ll i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
                z++;
            else if (s[i] == '1')
                o++;
            else
                q++;
        }
        if (z > a || o > b)
            cout << -1 << endl;
        else
        {
            bool fl = false;
            ll i = 0, j = s.size() - 1;
            while (i <= j)
            {
                if (i != j)
                {
                    if (s[i] == '?' && s[j] != '?')
                    {
                        if (s[j] == '0' && z >= a)
                        {

                            fl = true;
                            break;
                        }
                        else if (s[j] == '0')
                        {
                            s[i] = '0';
                            z++;
                            i++;
                            j--;
                        }
                        else if (s[j] == '1' && o >= b)
                        {

                            fl = true;
                            break;
                        }
                        else if (s[j] == '1')
                        {
                            s[i] = '1';
                            o++;
                            i++;
                            j--;
                        }
                    }
                    else if (s[i] != '?' && s[j] == '?')
                    {
                        if (s[i] == '0' && z >= a)
                        {
                            // cout<<-1<<endl;
                            fl = true;
                            break;
                        }
                        else if (s[i] == '0')
                        {
                            s[j] = '0';
                            z++;
                            i++;
                            j--;
                        }
                        else if (s[i] == '1' && o >= b)
                        {
                            // cout<<-1<<endlf;
                            fl = true;
                            break;
                        }
                        else if (s[i] == '1')
                        {
                            s[j] = '1';
                            o++;
                            i++;
                            j--;
                        }
                    }
                    else if (s[i] != '?' && s[j] != '?')
                    {
                        if (s[i] == s[j])
                        {
                            i++;
                            j--;
                        }
                        else
                        {
                            // cout<<-1<<endl;
                            fl = true;
                            break;
                        }
                    }
                    else
                    {
                        if (z + 2 <= a)
                        {
                            s[i] = '0';
                            s[j] = '0';
                            z += 2;
                            i++;
                            j--;
                        }
                        else if (o + 2 <= b)
                        {
                            s[i] = '1';
                            s[j] = '1';
                            o += 2;
                            i++;
                            j--;
                        }
                        else
                        {
                            // cout<<-1<<endl;
                            fl = true;
                            break;
                        }
                    }
                }
                else
                {
                    if (s[i] == '?')
                    {
                        if (z + 1 == a)
                        {
                            s[i] = '0';
                            i++;
                            j--;
                            z++;
                        }
                        else if (o + 1 == b)
                        {
                            s[i] = '1';
                            i++;
                            j--;
                            o++;
                        }
                        else
                        {
                            // cout<<-1<<endl;
                            fl = true;
                            break;
                        }
                    }
                    else
                    {
                        i++;
                    }
                }
            }
            if (fl == true)
            {
                cout << -1 << endl;
            }
            else if (a == z && b == o)
            {
                cout << s << endl;
            }
        }
    }
}