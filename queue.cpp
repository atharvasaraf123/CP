#include<bits/stdc++.h>
using namespace std;
class Queue
{
private:
    int N;
    stack<int>s1,s2;
public:
    Queue(){
        N=0;
    };
    void push(int x){
        s2.push(x);
        stack<int>s3;
        while(!s1.empty()){
            s3.push(s1.top());
            s1.pop();
        }
        while(!s3.empty()){
            s2.push(s3.top());
            s3.pop();
        }
        N++;
        stack<int>temp=s1;
        s1=s2;
        s2=temp;
    }
    void pop(){
        s1.pop();
        N--;
    }
    int top(){
        return s1.top();
    }
    int size(){
        return N;
    }
};
int main(){
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout<<q.top()<<endl;
    q.pop();
    cout<<q.top()<<endl;
    q.pop();
    cout<<q.top()<<endl;
    q.pop();
    cout<<q.top()<<endl;
    q.pop();
    cout<<q.size()<<endl;
    
}

