	
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
        vector<ll>v(n);
        vector<ll>occ(1005);
        bool flag=false;
        for(ll i=0;i<n;i++){
            cin>>v[i];
            occ[v[i]]++;
            if(occ[v[i]]>1 && v[i-1]!=v[i]){
                flag=true;
            }
        }
        cout<<flag;
        if(flag==true){
            cout<<"NO"<<endl;
        }else{
            vector<ll>tot(1005);
            for(auto it=occ.begin();it!=occ.end();it++){
                cout<<occ[*it];
                tot[occ[*it]]++;
                if(tot[occ[*it]]>1){
                    flag=true;
                    break;
                }
            }
            for(auto it=tot.begin();it!=tot.end();it++){
                cout<<tot[*it];
            }
            if(flag==true){
                cout<<"NO"<<endl;
            }else{
                cout<<"YES"<<endl;
            }

        }
    }
   }