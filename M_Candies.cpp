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
template <typename T>
istream &operator>>(istream &input, vector<T> &data)
{
    for (T &x : data)
        input >> x;
    return input;
}
template <typename T>
ostream &operator<<(ostream &output, const vector<T> &data)
{
    for (const T &x : data)
        output << x << " ";
    return output;
}
template <typename T>
ostream &operator<<(ostream &output, const set<T> &data)
{
    for (auto it : data)
        output << it << " ";
    return output;
}
template <typename T>
ostream &operator<<(ostream &output, const unordered_set<T> &data)
{
    for (auto it : data)
        output << it << " ";
    return output;
}
template <typename T, typename S>
ostream &operator<<(ostream &output, const map<T, S> &data)
{
    for (auto it : data)
        output << it.first << " " << it.second << endl;
    return output;
}
template <typename T, typename S>
ostream &operator<<(ostream &output, const unordered_map<T, S> &data)
{
    for (auto it : data)
        output << it.first << " " << it.second << endl;
    return output;
}
template <typename T, typename S>
ostream &operator<<(ostream &output, const pair<T, S> &data)
{
    output << data.first << " " << data.second << endl;
    return output;
}
ll go(vi&v,ll i,ll k){
    if(i>=v.size()&&k==0){
        return 1;
    }
    if(i>=v.size()){
        return 0;
    }
    ll ans=0;
    // cout<<"hello"<<endl;
    for(ll j=0;j<=v[i];j++){
        // cout<<j<<endl;
        if((k-j)>=0){
            ans+=go(v,i+1,k-j);
        }else{
            break;
        }
    }
    // cout<<ans<<" "<<i<<endl;
    return ans;
}
int main(){
    bolt;
    ll n,k;
    cin>>n>>k;
    vi v(n);
    
    cin>>v;

    for(ll i=0;i<n;i++){
        for(ll j=0;j<=k;j++){
            dp[i][j]+=dp[i-1][k+j]
        }
    }
    cout<<go(v,0,k)<<endl;
}