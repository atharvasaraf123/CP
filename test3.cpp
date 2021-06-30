#include <bits/stdc++.h>
#include <ctime>
#include <unistd.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<long long, long long> pll;
typedef pair<string, string> pss;
#define mp make_pair
typedef vector<ll> vll;
typedef vector<pll> vpll;
#define vvll(r, c, vec) vector<vll> vec(r, vll(c))
#define pb push_back
#define all(v) v.begin(), v.end()
typedef queue<ll> qll;
typedef queue<vll> qvll;
typedef queue<pll> qpll;
#define fi first
#define se second
#define lb lower_bound
#define ub upper_bound
#define pi 3.1415926535
#define MAX 1e18
#define ms(s, n) memset(s, n, sizeof(s))
#define prec(n) fixed << setprecision(n)
#define fori(p, n) for (ll i = p; i < (ll)n; i++)
#define forj(p, n) for (ll j = p; j < (ll)n; j++)
#define read(a)       \
    for (auto &p : a) \
        cin >> p;
#define printV(a)         \
    for (auto p : a)      \
        cout << p << " "; \
    cout << endl;
#define printM(m)                                     \
    for (auto it : m)                                 \
        cout << it.first << " " << it.second << endl; \
    cout << endl;
#define mod 1000000007
#define bolt                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define setbits(a) __builtin_popcountll(a)
#define start \
    ll t;     \
    cin >> t; \
    while (t--)

int main()
{
    // IO();
    bolt;
    start
    {
        ll n;cin>>n;
    vector<string>v(n);
    read(v);
    unordered_set<string> memory;
    vector<vector<string>> _ms(26);
    unordered_map<string, unordered_set<char>> count;
    unordered_map<string, unordered_set<char>> count1;
    vector<bool> initials(26, false);
    unordered_map<string, ll> freq;
    for (int i = 0; i < n; i++)
    {
        initials[v[i][0] - 'a'] = 1;
        memory.insert(v[i]);
         freq[v[i]]++;
        _ms[v[i][0] - 'a'].push_back(v[i].substr(1));
        
    }
    for (int i = 0; i < n; i++)
    {
        string s = v[i];
        string suffix = s.substr(1);
        for (int j = 0; j < 26; j++)
        {
            if (j != s[0] - 'a' && initials[j])
            {
                s[0] = 'a' + j;
                if (memory.find(s) == memory.end())
                {
                    count[suffix].insert(s[0]);
                    count1[suffix].insert(s[0]);
                }
            }
        }
    }
    ll ans = 0;
    for (auto it = count.begin(); it != count.end(); it++)
    {
        for (char c : it->second)
        {
            auto suffix = _ms[c - 'a'];
            for (string sfx : suffix)
            {
                for (char d : count1[sfx])
                {
                    string s = string(1, c) + sfx, t = string(1, d) + it->first;
                    if (memory.find(s) != memory.end() && memory.find(t) != memory.end())
                        ans += freq[t];
                }
            }
        }
    }
    cout<<ans<<endl;
}
}