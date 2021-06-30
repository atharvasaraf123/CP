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
        ll n;
        cin>>n;
        ll v[1005];
        bool vis[1005]={false};
        vis[0]=true;
        ll arr[1005]={0};
        ll occ[1005]={0};
        bool flag=false;
        list<ll>l;
        for(ll i=0;i<n;i++){
            cin>>v[i];
            arr[v[i]]++;
        }
        for(ll i=0;i<1005;i++){
            occ[arr[i]]++;
        }
        for(ll i=0;i<1005;i++){
            if(occ[i]>1){
                flag=true;
                break;
            }
        }
        for(ll i=1;i<n;i++){
            if(v[i]==v[i-1]){
                continue;
            }
            if(vis[v[i]]==false)
            vis[v[i]]=true;
            else{
                flag=true;
                break;
            }
        }
        if(flag==true){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }
}