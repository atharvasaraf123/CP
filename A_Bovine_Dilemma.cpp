	
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
int main()
{
    bolt;
    test{
      int n, k;
        cin >> n;
        vi v(n);
        set<double> s;
        for(int i=0;i<n;i++)
        {
            cin >> v[i];
        }
    for(int i=0;i<n;i++)    
        {
            for(int j=i + 1;j<n;j++)
            {
                s.insert(0.5 * (v[j] - v[i]));
            }
        }
        cout << s.size() << endl;
    }
}