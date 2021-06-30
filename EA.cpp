	
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
int main(){
    bolt;
    test{
        ll n;
        cin>>n;
        ll v[n];
        ll eve=0,odd=0;
        for(ll i=0;i<n;i++){
            ll x;
          cin>>x;
            if(x%2){
                odd++;
            }else eve++;
            v[i]=x;
        }
        if((n%2==0)&&eve!=odd){
            cout<<-1<<endl;
        }else if((n%2==1)&&(odd!=(eve-1))){
            cout<<-1<<endl;
        }else{
            ll swap=0;
            for(ll i=0;i<n;){
                if((v[i]%2)!=(i)%2){
                    swap++;
                }
                i++;
            }
            cout<<swap/2<<endl;
        }

    }
  }
