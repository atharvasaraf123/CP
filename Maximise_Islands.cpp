
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
        ll n, m;
        cin >> n >> m;
        vector<string> v(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        // for(ll i=0;i<n;i++){
        //     cout<<v[i];
        // }
        vector<string> a(n);
        vector<string> b(n);
        for (ll i = 0; i < n; i++)
        {
            string an = "";
            for (ll j = 0; j < m; j++)
            {
                if (i % 2 == 0 && j % 2 == 0)
                {
                    an += '.';
                }
                else if (i % 2 == 1 && j % 2 == 0)
                {
                    an += '*';
                }
                else if (i % 2 == 0 && j % 2 == 1)
                {
                    an += '*';
                }
                else
                {
                    an += '.';
                }
            }
            a[i] = an;
        }
        for (ll i = 0; i < n; i++)
        {
            string an = "";
            for (ll j = 0; j < m; j++)
            {
                if (i % 2 == 0 && j % 2 == 0)
                {
                    an += '*';
                }
                else if (i % 2 == 1 && j % 2 == 0)
                {
                    an += '.';
                }
                else if (i % 2 == 0 && j % 2 == 1)
                {
                    an += '.';
                }
                else
                {
                    an += '*';
                }
            }
            b[i] = an;
        }
        int a1 = 0, b1 = 0;
        int an1=0,an2=0;
        for (ll i = 0; i < n; i++)
        {
            a1 += count(a[i].begin(), a[i].end(), '*');
        }
        for (ll i = 0; i < n; i++)
        {
            b1 += count(b[i].begin(), b[i].end(), '*');
        }
        if (a1 == b1)
        {
            for (ll i = 0; i < n; i++)
            {
                string x = v[i];
                string y = a[i];
                string z = b[i];
                for (ll j = 0; j < m; j++)
                {
                    if (x[j] != y[j])
                    {
                        an1++;
                    }
                    if (x[j] != z[j])
                    {
                        an2++;
                    }
                }
            }
            cout<<min(an1,an2)<<endl;
        }else{
            if(a1>b1){
                for (ll i = 0; i < n; i++)
            {
                string x = v[i];
                string y = a[i];
                for (ll j = 0; j < m; j++)
                {
                    if (x[j] != y[j])
                    {
                        an1++;
                    }
                }
            }
            cout<<an1<<endl;
            }else{
                 for (ll i = 0; i < n; i++)
            {
                string x = v[i];
                string y = b[i];
                for (ll j = 0; j < m; j++)
                {
                    if (x[j] != y[j])
                    {
                        an1++;
                    }
                }
            }
            cout<<an1<<endl;
            }
        }
    }
}