	
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
bool sortbysec(const pair<int,int> &a, 
              const pair<int,int> &b) 
{ 
    return (a.second < b.second); 
} 
int main()
{
    bolt;
    test{
        ll n;
        cin>>n;
        vector<pair<int,int>>v(n);
        for(ll i=0;i<n;i++){
            ll x,y;
            cin>>v[i].first>>v[i].second;
        }
        auto it=min_element(all(v));
        ll minY=INT_MAX;
        int x=0;
        for(int i=0;i<n;i++){
            if(v[i].second<minY){
                minY=v[i].second;
                x=i;
            }
        }
        auto it1=v.begin()+x;
         for(int i=0;i<n;i++){
            if(v[i].second*v[i].first<minY){
                minY=v[i].second*v[i].first;
                x=i;
            }
        }
        auto it2=v.begin()+x;
        // for(ll i=0;i<n;i++){
        //     cout<<v[i].first<<" "<<v[i].second<<endl;
        // }
        for(ll i=0;i<n;i++){
            if(v[i].first>it->first && v[i].second>it->second){
                cout<<it-v.begin()+1<<" ";
            }else if(v[i].first>it->second && v[i].second>it->first){
                cout<<it-v.begin()+1<<" ";
            }
            else if(v[i].first>it1->first && v[i].second>it1->second){
                cout<<it1-v.begin()+1<<" ";
            }else if(v[i].first>it1->second && v[i].second>it1->first){
                cout<<it1-v.begin()+1<<" ";
            }
            else if(v[i].first>it2->first && v[i].second>it2->second){
                cout<<it2-v.begin()+1<<" ";
            }else if(v[i].first>it2->second && v[i].second>it2->first){
                cout<<it2-v.begin()+1<<" ";
            }
            else{
                cout<<-1<<" ";
            }
        }
        cout<<endl;
        
    }
}