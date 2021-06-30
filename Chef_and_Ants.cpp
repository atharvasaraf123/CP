
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
        vector<vector<ll>> v(n);
        map<ll,ll>name;
        vector<ll> ind(n, -1);
        vector<ll> pos(n, 0);
        vector<ll> neg(n, 0);
        for (ll i = 0; i < n; i++)
        {
            ll m;
            cin >> m;
            bool a = false;
            for (ll i = 0; i < m; i++)
            {
                ll y;
                cin >> y;
                if (y > 0)
                {
                    if (a == false)
                    {
                        a = true;
                        ind[i] = neg[i];
                    }
                    pos[i]++;
                }
                else
                {
                    neg[i]++;
                }
                v[i].pb(y);
                name[abs(y)]++;
            }
        }
            int c=0;
            for(auto it=name.begin();it!=name.end();it++){
                if(it->second>1) c++;
            }
            ll a = 0;
            ll b=0;
            for (ll i = 0; i < n; i++)
            {
                a += pos[i] * neg[i];
                if (ind[i] != -1)
                {
                    ll k=ind[i]-1;
                    for (ll j = ind[i];j<v[i].size();j++){
                        if(k>=0 && abs(v[i][j]==v[i][k])){
                            b++;
                            k--;
                        }else{
                            break;
                        }
                    }
                }
            }
            cout<<a-b+c<<endl;
    }
}