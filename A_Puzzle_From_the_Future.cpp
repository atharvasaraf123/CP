
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
        ll n;
        cin >> n;
        string b;
        cin >> b;
        string a = "";
        char prev = '0';
        for (int i = 0; i < n; i++)
        {
            //0
            if (b[i] == '0')
            {
                if (prev == '0')
                {
                    a += '1';
                    prev = '1';
                }
                else if (prev == '1')
                {
                    a += '0';
                    prev = '0';
                }
                else
                {
                    a += '1';
                    prev = '1';
                }
            }
            //1
            else
            {
                if (prev == '0')
                {
                    a += '1';
                    prev = '2';
                }
                else if (prev == '1')
                {
                    a += '1';
                    prev = '2';
                }
                else
                {
                    a += '0';
                    prev = '1';
                }
            }
        }
        cout << a << endl;
    }
}