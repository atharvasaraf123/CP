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
template <typename T>
istream &operator>>(istream &input, vector<T> &data)
{
    for (T &x : data)
        input >> x;
    return input;
}
template <typename T>
ostream &operator<<(ostream &output, const vector<T> &data)
{
    for (const T &x : data)
        output << x << " ";
    return output;
}
template <typename T>
ostream &operator<<(ostream &output, const set<T> &data)
{
    for (auto it : data)
        output << it << " ";
    return output;
}
template <typename T>
ostream &operator<<(ostream &output, const unordered_set<T> &data)
{
    for (auto it : data)
        output << it << " ";
    return output;
}
template <typename T, typename S>
ostream &operator<<(ostream &output, const map<T, S> &data)
{
    for (auto it : data)
        output << it.first << " " << it.second << endl;
    return output;
}
template <typename T, typename S>
ostream &operator<<(ostream &output, const unordered_map<T, S> &data)
{
    for (auto it : data)
        output << it.first << " " << it.second << endl;
    return output;
}
template <typename T, typename S>
ostream &operator<<(ostream &output, const pair<T, S> &data)
{
    output << data.first << " " << data.second << endl;
    return output;
}
ll dp[100002];
// bool go(vi &v, ll n, ll k, bool first)
// {
//     if (k == 0)
//     {
//         return first;
//     }
//     if (dp[k][first] != -1)
//     {
//         return dp[k][first];
//     }
//     bool ans = false;
//     for (ll i = 0; i < n; i++)
//     {
//         if (v[i] <= k)
//         {
//             ans = ans || go(v, n, k - v[i], !first);
//         }
//     }
//     // cout<<ans<<endl;
//     if (ans)
//         return dp[k][first] = first;
//     return dp[k][first] = !first;
// }

int main()
{
    bolt;
    ll n, k;
    cin >> n >> k;
    // cout<<n<<" "<<k<<endl;
    for (ll i = 0; i <= k; i++)
    {
            dp[i] = 0;

    }
    vi v(n);
    cin >> v;
    // cout<<"Hello"<<endl;
    for(int i = 0;i <= k;i++) {
        for(int j = 0;j < n;j++) {
            if(i +v[j] > k) break;
            if(!dp[i]) dp[i + v[j]] = 1;
        }
    }
    // cout<<"Hello"<<endl;
    if (dp[k])
    {
        cout << "First" << endl;
    }
    else
    {
        cout << "Second" << endl;
    }
}