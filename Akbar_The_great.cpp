

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
#define allr(v) v.rbegin(), v.rend()
bool sortbysecdesc(const pair<int,int> &a,
                   const pair<int,int> &b)
{
       return a.second>b.second;
}
bool bfs(vector<vector<int>> arr, vector<bool> &visited, int start, int k, int n);
int main()
{
    bolt;
    test
    {
        ll n, r, m;
        cin >> n >> r >> m;
        vector<vector<int>> arr(n + 1, vector<int>(n + 1, 0));
        for (ll i = 0; i < r; i++)
        {
            ll x, y;
            cin >> x >> y;
            arr[x][y] = 1;
            arr[y][x] = 1;
        }
        vector<pair<ll, ll>> v;
        for (ll i = 0; i < m; i++)
        {
            ll x, y;
            cin >> x >> y;
            v.push_back(make_pair(x, y));
        }
        sort(all(v),sortbysecdesc);
        bool yes = true;
        vector<bool> visited(n + 1, false);
        for (int i = 0; i < m; i++)
        {
            pair<int, int> p = v[i];
            bool ans = bfs(arr, visited, p.first, p.second, n);
            if(ans==false){
                yes=false;
                break;
            }
        }
        if(yes==true){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}
bool bfs(vector<vector<int>> arr, vector<bool> &visited, int start, int k, int n)
{
    bool ans = false;
    int i = 0;
    queue<int> q;
    if (visited[start] == false)
    {
        visited[start] = true;
        ans = true;
    }
    q.push(start);
    while (!q.empty() && i < k)
    {
        int v = q.front();
        q.pop();
        for (int u = 1; u <= n; u++)
        {
            if (!visited[u] && arr[v][u] == 1)
            {
                ans = true;
                visited[u] = true;
                q.push(u);
            }
            
        }
        i++;
    }
    return ans;
}
