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
void givemeac(){
    ll n;
    cin >> n;
    string s;
    cin >> s;
    int t = 0, m = 0;
    for (char c : s)
    {
        if (c == 'T')
            t++;
        else
            m++;
    }
    if (2 * m != t)
    {
        cout << "NO" << endl;
        return;
    }
    ll left = 0, right = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'T')
        {
            left++;
        }
        else
        {
            if (left <= 0)
            {
                cout << "NO" << endl;
                return;
            }
            left--;
        }
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] == 'T')
        {
            right++;
        }
        else
        {
            if (right <= 0)
            {
                cout << "NO" << endl;
                return;
            }
            right--;
        }
    }
    cout << "YES" << endl;
}
int main(){
    bolt;
    test{
       givemeac();
    }
}