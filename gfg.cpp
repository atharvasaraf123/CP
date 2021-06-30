#include<bits/stdc++.h>
using namespace std;
string armstrongNumber(int n){
        // code here
        int k=n;
        int a=0;
        while(k>0){
            int rem=k%10;
            k=k/10;
            a+=pow(rem,3);
            cout<<a<<endl;
        }
        if(a==n)return "Yes";
        return "No";
    }
int main(){
    int n,m;
    cin>>n;
    cout<<armstrongNumber(n);
}