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
    #define allr(v) v.rbegin(), v.rend()
    int main(){
        bolt;
        test{
            ll n;cin>>n;
            if(n%2==0){
                vector<ll>v(n-1,0);
                for(ll i=0;i<(n-1)/2;i++){
                    v[i]=1;
                }
                v[(n-1)/2]=0;
                for(ll i=n/2;i<n-1;i++){
                    v[i]=-1;
                }
                for(ll i=n-1;i>=0;i--){
                    for(ll j=0;j<i;j++){
                        cout<<v[j]<<" ";
                    }
                }
                cout<<endl;
            }else{
                for(ll i=0;i<(n)*(n-1)/2;i++){
                    if(i%2==0){
                        cout<<1<<" ";
                    }else{
                        cout<<-1<<" ";
                    }
                }
                cout<<endl;
            }
        }
    }