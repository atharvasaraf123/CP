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
        string a;
        cin>>a;
        if(a.length()%2==1){
            cout<<-1<<endl;
        }else{
            ll zer=0,one=0;
            for(ll i=0;i<a.length();i++){
                if(a[i]=='0'){
                    zer++;
                }else{
                    one++;
                }
            }
            if(zer==one){
                cout<<0<<endl;
            }else{
                if(zer==a.length()||zer==0){
                    cout<<-1<<endl;
                }else{
                    cout<<abs(zer-one)/2<<endl;
                }
            }
        }
    }
}