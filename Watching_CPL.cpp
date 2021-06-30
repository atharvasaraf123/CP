	
#include <bits/stdc++.h>
using namespace std;
#define bolt ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define test int tt; cin>>tt; while(tt--)
#define ll long long
#define ld long double
#define vi vector<ll>
#define pb push_back
#define F first
#define S second
#define mod 1000000007
#define all(v) v.begin(), v.end()
#define allr(v) v.rbegin(), v.rend()
int dp[4100][4100]; //Don't make just the boundary value of n and k, as the index can go high after adding the height of nth  box to current sum
int pref[4001];
int rec(vector<ll>&h, int curr, int s1, int k, int n)
{
    int s2 = pref[curr] - s1;
    if (s1 >= k && s2 >= k)
        return curr;
    if (curr == n)
        return -1;
    if (dp[curr][s1] != INT_MIN)
        return dp[curr][s1];
    int ans;
    if (s1 == s2)
        ans = rec(h, curr + 1, s1 + h[curr], k, n);
    else
    {
        int x1 = -1, x2 = -1;
        if (s1 < k)
            x1 = rec(h, curr + 1, s1 + h[curr], k, n);
        if (s2 < k)
            x2 = rec(h, curr + 1, s1, k, n);
        if (x1 == -1 && x2 == -1)
            ans = -1;
        else if (x1 == -1)
            ans = x2;
        else if (x2 == -1)
            ans = x1;
        else
            ans = min(x1, x2);
    }
    dp[curr][s1] = ans;
    return ans;
}
int main()
{
    bolt;
    test{
         int n, k;
    cin >> n >> k;
    vector<ll> h(n);
    for (int i = 0; i < n; i++)
        cin >> h[i];
    sort(h.begin(), h.end(), greater<int>());
    int sum = 0;
    pref[0] = 0;
    for (int i = 0; i < n + 100; i++)
    {
        if (i < n)
        {
            sum += h[i];
            pref[i + 1] = sum;
        }
        for (int j = 0; j < k + 100; j++)
            dp[i][j] = INT_MIN;
    }
    cout << rec(h, 0, 0, k, n) << endl;
    }
}
