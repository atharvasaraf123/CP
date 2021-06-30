#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
// #include <boost/multiprecision/cpp_int.hpp>
// using namespace boost::multiprecision;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef double db;
typedef std::string str;
#define sei set<int>
#define sell set<ll>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vll vector<ll>
#define vvi vector<vi>
#define vvll vector<vll>
#define vld vector<ld>
#define vstr vector<str>
#define vpii vector<pii>
#define vpll vector<pll>
#define all(v) v.begin(), v.end()
#define all_(v) v.rbegin(), v.rend()
#define foa(i, v) for (auto i : v)
#define fo(i, a, b) for (int i = a; i < b; i++)
#define fo_(i, a, b) for (int i = a; i >= b; i--)
#define tt    \
    ll t;     \
    cin >> t; \
    while (t--)
#define M1(a) memset(a, 0, sizeof a)
#define M_(a) memset(a, -1, sizeof a)
#define deb(x) cerr << #x << " = " << x << endl
#define pb push_back
#define F first
#define S second
#define N 1000005
#define M 1000000007
#define OK order_of_key
#define FO find_by_order
#define nmax 1000100
#define bolt                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
const ld PI = 3.141592653589793238462643383279;
const ll inf = std::numeric_limits<ll>::max();
const int infint = std::numeric_limits<int>::max();
const ll mod = 1e9 + 7;
using namespace __gnu_pbds;
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

//Prime Numbers

vector<bool> prime(N + 1, true);
void sieve()
{
    ll i, j, k;
    prime[0] = prime[1] = false;
    for (i = 2; i * i <= N; i++)
    {
        if (prime[i])
        {
            for (j = i * i; j <= N; j++)
            {
                prime[j] = false;
            }
        }
    }
}
//Exponentiation

ll power(ll a, ll b)
{
    ll r = 1;
    while (b)
    {
        if (b % 2 == 1)
            r = r * a;
        b /= 2;
        a *= a;
    }
    return r;
}
ll power(ll a, ll b, ll m)
{
    a = a % m;
    ll r = 1;
    while (b)
    {
        if (b % 2 == 1)
            r = (r * a) % m;
        b /= 2;
        a = (a * a) % m;
    }
    return r;
}
// 1 2 1 , 1 2 1 3 1 2 1, 1 2 1 3 1 2 1 4 1 2 1 3 1 2 1 ...
ll Power(ll a, ll b)
{
    if (b == 0)
        return 1;
    else if (b % 2 == 0)
        return power(a * a, b / 2);
    else
        return a * power(a, b - 1);
}
//Prime Factors

vector<ll> factors(ll n)
{
    vector<ll> r;
    ll i, j;
    for (i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            r.push_back(i);
            if (n / i != i)
                r.push_back(n / i);
        }
    }
    return r;
}

//GCD
ll gcd(ll a, ll b)
{
    if (b > a)
    {
        ll t = a;
        a = b;
        b = t;
    }
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
ll lcm(ll a, ll b)
{
    return (a * b) / gcd(a, b);
}
//Graphs
vector<bool> bvisited(N, false);
map<ll, ll> level;
ll ans = INT64_MAX;
vector<ll> bfs(ll V, vector<vector<ll>> G, ll s, ll e)
{
    vector<ll> order;
    queue<ll> q;
    q.push(s);
    level[s] = 0;
    while (!q.empty())
    {
        s = q.front();
        q.pop();
        bvisited[s] = true;
        //order.push_back(s);
        if (s == e)
        {
            ans = ans > level[s] ? level[s] : ans;
            return order;
        }
        if (s > 20000)
            continue;
        for (auto x : G[s])
        {
            if (!bvisited[x])
            {
                q.push(x);
                level[x] = level[s] + 1;
            }
        }
    }
    return order;
}

vector<bool> dvisited(N, false);
vector<ll> dfs(ll V, ll e, ll s)
{
    vector<ll> order;
    stack<ll> q;
    q.push(s);
    level[s] = 1;
    while (!q.empty())
    {
        ll v = q.top();
        q.pop();
        if (v == e)
        {
            ans = ans > level[v] ? level[v] : ans;
            continue;
        }
        if (!dvisited[2 * v] && 2 * v <= 2 * e)
        {
            q.push(2 * v);
            level[2 * v] = level[v] + 1;
        }
        if (!dvisited[v - 1])
        {
            q.push(v - 1);
            level[v - 1] = level[v] + 1;
        }
    }
    return order;
}

int main()
{
    bolt;
    tt
    {
        int n;
        cin >> n;
        int wt = 0, c1 = 0, c2 = 0;
        vi c(n);
        fo(i, 0, n)
        {
            cin >> c[i];
            wt += c[i];
            if (c[i] == 1)
                c1++;
            else
                c2++;
        }
        if (wt % 2 != 0)
        {
            cout << "NO\n";
        }
        else
        {
            if ((c2 & 1 && c1 > 0) || (c1 + c2) % 2 == 0)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
    }
    return 0;
}