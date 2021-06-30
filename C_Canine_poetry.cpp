	
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
        if(a.length()==1){
            cout<<0<<endl;
        }else{
        vector<bool>check(a.length(),false);
        int ans=0;
        for(int i=0;i<a.length()-2;i++){
            if(i<a.length()-2&&a[i]==a[i+2] && !check[i] && !check[i+2]){
                ans++;
                check[i+2]=!check[i+2];
            }
             if(i<a.length()-1&&a[i]==a[i+1] && !check[i] && !check[i+1]){
                ans++;
                check[i+1]=!check[i+1];
            }
        }
        // for(int i=0;i<a.length()-1;i++){
    
        // }
        cout<<ans<<endl;  
        }
    }
}