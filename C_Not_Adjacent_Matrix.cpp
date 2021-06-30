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
int main(){
    bolt;
    test{
        ll n;
        cin>>n;
        if(n%2==0){
            if(n==2){
                cout<<-1<<endl;
            }else{
                vector<vector<ll>>v(n,vector<ll>(n,0));
                ll k=1;
                for(ll i=0;i<n/2;i++){
                    for(ll j=0;j<n;j++){
                        v[i][j]=k;
                        k+=2;
                    }
                }
                k=2;
                for(ll i=n/2;i<n;i++){
                    for(ll j=0;j<n;j++){
                        v[i][j]=k;
                        k+=2;
                    }
                }
                for(ll i=0;i<n;i++){
                    cout<<v[i]<<endl;
                }
            }
        }else{
            vector<vector<ll>>v(n,vector<ll>(n,0));
            ll k=1;
            ll i=0,j=0;
            while(i<n){
                v[i][j]=k;
                k++;
                if((j+2)>=n){
                    i++;
                    j=(j+2)%n;
                }else{
                    j+=2;
                }
                // cout<<i<<endl;
            }
            i=0;j=1;
             while(i<n){
                v[i][j]=k;
                k++;
                if((j+2)>=n){
                    i++;
                    j=(j+2)%n;
                }else{
                    j+=2;
                }
            }
            for(ll i=0;i<n;i++){
                cout<<v[i]<<endl;
            }
        }
    }
}