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
int go(vector<ll> &v, ll i, ll k, vi &dp, int prev)
{
    if (i >= v.size() || prev >= v.size())
    {
        return 100000;
    }
    if (i == (v.size() - 1))
    {
        return 0;
    }
    if (dp[i] != -1)
    {
        return dp[i];
    }
    ll ans = 100000;
    for (ll j = i + 1; j < v.size() && j < (i + k + 1); j++)
    {
        ans = min(ans, abs(v[i] - v[j]) + go(v, j, k, dp, i));
    }
    return dp[i] = ans;
}
int main()
{
    bolt;
    ll N, K;
    cin >> N >>K;
    vi dp(N, -1);
    vi h(N);
    cin >> h;
    dp[0]=0;
    dp[1]=abs(h[1]-h[0]);
    for (ll i = 2; i < N; i++)
    {
        dp[i] = dp[i - 1] + abs(h[i] - h[i - 1]);
        for (ll j = 2; j <= min(i, K); j++)
        {
            if (dp[i] > dp[i - j] + abs(h[i] - h[i - j]))
            {
                dp[i] = dp[i - j] + abs(h[i] - h[i - j]);
            }
        }
    }
    cout<<dp[N-1]<<endl;
    
}