
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
    int t;
    scanf("%d", &t);
    while (t--)
    {
        for (ll i = 1; i <= 1000; i++)
        {
            printf("%d\n", i * i);
            fflush(stdout);
            int res;
            scanf("%d", &res);
            if (res == 1)
            {
                break;
            }
        }
    }
}