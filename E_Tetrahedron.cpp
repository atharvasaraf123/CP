
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
#define N 1e7+2
#define all(v) v.begin(), v.end()
#define allr(v) v.rbegin(), v.rend()
vector<vector<int>>dp(4,vector<int>(N,-1));
// int go(int src,int steps){
//     if(steps==0){
//         if(src==3){
//             return 1;
//         }
//         return 0;
//     }
//     if(dp[src][steps]!=-1){
//         return dp[src][steps];
//     }
//     int ans=0;
//     for(int i=0;i<=3;i++){
//         if(i!=src){
//             ans+=go(i,steps-1);
//             if(ans>mod){
//              ans=ans-mod;   
//             }
//         }
//     }
//     return dp[src][steps]=ans;
// }
int main()
{
    int steps;
    cin>>steps;
    
}