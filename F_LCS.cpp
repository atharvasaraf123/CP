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
string go(string a, string b, int i, int j, map<ll, map<ll, string>> &dp)
{
    if (i >= a.size() || j >= b.size())
    {
        return "";
    }
    if (!(dp[i][j].empty() || dp[i][j] == ""))
        return dp[i][j];
    string c = "", d = "", e = "";
    if (a[i] == b[j])
    {
        c = a[i] + go(a, b, i + 1, j + 1, dp);
    }
    d = go(a, b, i, j + 1, dp);
    e = go(a, b, i + 1, j, dp);
    if (c.size() >= d.size() && c.size() >= e.size())
    {
        return dp[i][j] = c;
    }
    else if (d.size() >= c.size() && d.size() >= e.size())
    {
        return dp[i][j] = d;
    }
    return dp[i][j] = e;
}
int main()
{
    bolt;
    string X;
    string Y;
    cin >> X >> Y;
    ll m = X.size();
    ll n = Y.size();
    vector<vector<ll>> L(m + 1, vi(n + 1, -1));
    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (i == 0 || j == 0)
                L[i][j] = 0;
            else if (X[i - 1] == Y[j - 1])
                L[i][j] = L[i - 1][j - 1] + 1;
            else
                L[i][j] = max(L[i - 1][j], L[i][j - 1]);
        }
    }
    int index = L[m][n];

    char lcs[index+1];
    lcs[index]='\0';
    int i = m, j = n;
    while (i > 0 && j > 0)
    {
        if (X[i - 1] == Y[j - 1])
        {
            lcs[index - 1] = X[i - 1];
            i--;
            j--;
            index--;
        }

        else if (L[i - 1][j] > L[i][j - 1])
            i--;
        else
            j--;
    }
    cout << lcs << endl;
}