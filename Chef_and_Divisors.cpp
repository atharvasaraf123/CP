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
int printDivisors(int n)
{
    ll k = 0;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (n / i == i)
                k++;

            else // Otherwise print both
                k += 2;
        }
    }
    return k;
}
bool isPrime(ll x)
{
    for (ll i = 2; i <= sqrt(x); i++)
    {
        if (x % i == 0)
        {
            return false;
        }
    }
    return true;
}
int go(vector<ll> &all, int n, int i, vector<int> &ans)
{
    if (i > all.size())
    {
        return INT_MAX;
    }
    if (ans[n] != -1)
    {
        return ans[n];
    }
    int min1 = INT_MAX;
    for (ll j = 0; j < all.size(); j++)
    {
        if (all[j] < n)
        {
            if (n % all[j] == 0)
            {
                min1 = min(min1, go(all, n / all[j], j, ans));
            }
        }
        else
        {
            break;
        }
    }
    ans[n] = min1;
    return ans[n];
}
int main()
{
    bolt;
    // ll t;
    // cin >> t;
    vector<pair<int,int>>v(5);
    for (int i = 0; i < 5; i++)
    {
        v.push_back(make_pair(1, 1));
    }
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << it->first << endl;
    }
//     vector<ll> v(t);
//     for (ll i = 0; i < t; i++)
//     {
//         cin >> v[i];
//     }
//     ll x = *max_element(all(v));
//     // cout<<x<<endl;
//     vector<ll> prime;
//     for (ll i = 2z; i <= x / 2; i++)
//     {
//         if (isPrime(i))
//         {
//             prime.push_back(i);
//         }
//     }
//     set<ll> all;
//     for (ll i = 0; i < prime.size(); i++)
//     {
//         if (prime[i] * prime[i] * prime[i] <= x)
//             all.insert(prime[i] * prime[i] * prime[i]);
//         for (ll j = i + 1; j < prime.size(); j++)
//         {
//             if ((prime[i] * prime[j]) > x)
//             {
//                 break;
//             }
//             all.insert(prime[i] * prime[j]);
//         }
//     }
//     for (ll i = 0; i < t; i++)
//     {
//         if (all.find(v[i]) != all.end())
//         {
//             cout << 1 << endl;
//         }
//         else
//         {
//             cout << 2 << endl;
//         }
//     }
// }
}
// vector<vector<int>> dp;
// int go(string word1, string word2, int i, int j)
// {
//     if (i < 0)
//     {
//         return j + 1;
//     }
//     if (j < 0)
//     {
//         return i + 1;
//     }
//     if (dp[i][j] != -1)
//     {
//         return dp[i][j];
//     }
//     if (word1[i] == word2[j])
//     {
//         return dp[i][j] = go(word1, word2, i - 1, j - 1);
//     }
//     else
//     {
//         return dp[i][j] = 1 + min(min(go(word1, word2, i, j - 1), go(word1, word2, i - 1, j - 1)), go(word1, word2, i - 1, j));
//     }
// }
// int minDistance(string word1, string word2)
// {
//     dp.resize(word1.length(), vector<int>(word2.length(), -1));
//     return go(word1, word2, word1.length() - 1, word2.length() - 1);
// }
