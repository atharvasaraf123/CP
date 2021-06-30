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
int main(){
    bolt;
    int k=1;
    test{
        ll n;
        cin>>n;
        string s;
        cin>>s;
        vector<int>ans(n,0);
        ans[0]=1;
        for(int i=1;i<s.size();i++){
            if(s[i]>s[i-1]){
                ans[i]=ans[i-1]+1;
            }else{
                ans[i]=1;
            }
        }
        cout<<"Case #"<<k<<": ";
        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        k++;
    }
}