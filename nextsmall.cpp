#include <bits/stdc++.h>
#define ll long long
using namespace std;


void smallerNumber(vector<ll> &v, int n)
{
    stack<int> s;
    map<int, int> mapp;
    s.push(v[0]);
    for (ll i = 1; i < n; i++)
    {
        while (!s.empty() && s.top() > v[i])
        {
            mapp[s.top()] = v[i];
            s.pop();
        }
        s.push(v[i]);
    }
    for (ll i = 0; i < n; i++)
    {
        cout << mapp[v[i]] << endl;
    }
}
int main()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
        cin >> v[i];
    smallerNumber(v,n);
}

