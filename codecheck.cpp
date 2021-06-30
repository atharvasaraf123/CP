/*~~~~~~~~
	Divyank Lunkad 
~~~~~~~~*/

// Problem Link:

#include <bits/stdc++.h>

using namespace std;

#define bolt                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
typedef long long ll;
typedef vector<ll> vll;

ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

string correct(int n, int k)
{
    int x = 1;
    map<int, char> mapp;
    for (int i = 1; i <= 26; i++)
    {
        mapp[x] = 'a' + i - 1;
        x = x * 2;
    }
    vector<int> v(k, 1);
    int sum = k;
    for (int i = k - 1; i >= 0; i--)
    {
        while (sum + v[i] <= n)
        {
            sum += v[i];
            v[i] = v[i] * 2;
        }
    }

    if (sum == n)
    {
        string s = "";
        for (int i = 0; i < k; i++)
        {
            s += mapp[v[i]];
        }
        return s;
    }
    return "-1";
}

string solve(int n, int k)
{
    if (k < n)
    {
        // cout << -1 << endl;
        return "-1";
    }
    bitset<18> b(k);
    vector<int> v(18, 0);
    int count = 0;
    for (int i = 0; i < 18; i++)
    {
        if (b[i] == 1)
        {
            count++;
            v[i]++;
        }
    }#
    int index = 17;
    int moreCount = n - count;
    while (moreCount > 0 && index > 0)
    {
        int convert = min(moreCount, v[index]);
        v[index] -= convert;
        v[index - 1] += 2 * convert;
        moreCount -= convert;
        index--;
    }
    int sum = 0, totalC = 0;
    string s = "";
    for (int i = 0; i < 18; i++)
    {
        if (v[i])
        {
            totalC += v[i];
            sum += v[i] * pow(2, i);
            s += string(v[i], i + 'a');
        }
    }
    if (sum == k && totalC == n)
        return s;
    else
        return "-1";
}

int main()
{
    bolt;
    ll t;
    cin >> t;
    while (t--)
    {
        int n, k;
        n = (std::rand() % (100 + 1));
        k = (std::rand() % (500 + 1));
        string A = solve(n, k);
        string B = correct(n, k);
        if (A != B)
        {
            cout << n << " " << k << endl;
            cout << A << endl;
            cout << endl;
            cout << B << endl;
            cout << endl;
        }
    }
    return 0;
}