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
int floorSqrt(ll x)
{
   ll sum=0;
   while(x>0){
       sum+=x%10;
       x=x/10;
   }
   return sum;
}
int main(){
    ll n;
    cin>>n;
    while((n/10)>=1){
        n=floorSqrt(n);
    }
    cout<<n<<endl;
}