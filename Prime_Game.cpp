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
 
int primeFac(int n,vector<ll>&q) 
{ 
    // Create a boolean array "prime[0..n]" and initialize 
    // all entries it as true. A value in prime[i] will 
    // finally be false if i is Not a prime, else true. 
    int ans=0;
    bool prime[n+1]; 
    memset(prime, true, sizeof(prime)); 
  
    for (int p=2; p*p<=n; p++) 
    { 
        // If prime[p] is not changed, then it is a prime 
        if (prime[p] == true) 
        { 
            // Update all multiples of p 
            for (int i=p*2; i<=n; i += p) 
                prime[i] = false; 
        } 
    } 
  
    // Print all prime numbers 
    for (int p=2; p<=n; p++) {
       if (prime[p]) {
         ans++;
       }
       q[p]=ans;
    }
    
    return ans;
} 
int main(){
    bolt;
    ll t;cin>>t;
    vector<ll>x(t);
    vector<ll>y(t);
    for(ll i=0;i<t;i++){
        cin>>x[i]>>y[i];
    }
    ll a=*max_element(x.begin(),x.end());
    vector<ll>p(a+1);
    p[1]=0;
    primeFac(a,p);
    for(ll i=0;i<t;i++){
        if(p[x[i]]<=y[i]){
            cout<<"Chef"<<endl;
        }else{
            cout<<"Divyam"<<endl;
        }
    }

}