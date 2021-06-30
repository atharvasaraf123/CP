
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
struct Frog_Sort
{
    /* data */
    int wt;
    int jmp;
    int pos;
};
bool comp(Frog_Sort f1,Frog_Sort f2){
    if(f1.wt<f2.wt) return true;
    else return false;
}
int main()
{
    bolt;
    test
    {
      ll n;cin>>n;
      vi a(n),b(n);
      for(ll i=0;i<n;i++)cin>>a[i];
      for(ll i=0;i<n;i++)cin>>b[i];
      vector<Frog_Sort>v(n);
      for(ll i=0;i<n;i++){
          Frog_Sort f;
          f.wt=a[i];
          f.pos=i;
          f.jmp=b[i];
          v[i]=f;
      }
      sort(all(v),comp);
      ll ans=0;
    //   for(ll i=0;i<n;i++){
    //       cout<<v[i].jmp<<" "<<v[i].wt<<" "<<v[i].pos<<endl;
    //   }
      for(ll i=1;i<n;i++){
          ll x=v[i-1].pos;
          ll y=v[i].pos;
          if(y<=x){
              ll z=(x-y+1)%(v[i].jmp)==0?(x-y+1)/(v[i].jmp):(x-y+1)/(v[i].jmp)+1;
              v[i].pos+=z*v[i].jmp;
              ans+=z;
          }
      }
      cout<<ans<<endl;
    }
}