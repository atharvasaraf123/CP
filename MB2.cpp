	
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
        ll moves=0;
        while(n!=1){
            if(n%6==0){
                n/=6;
                moves++;
            }else if((n%3!=0)){
                break;
            }else{
                n*=2;
                moves++;
            }
        }
        if(n!=1){
            cout<<-1<<endl;
        }else{
            cout<<moves<<endl;
        }
    }
}