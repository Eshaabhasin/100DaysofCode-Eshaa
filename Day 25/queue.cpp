#include<iostream>
using namespace std;
class Queue{
    int *a;
    int n;
    int f;
    int e;
    int cs;
public:
Queue(int s){
    n=s;
    a=new int[s];
    cs=0;
    f=0;
    e=n-1;
}

void push(int d){
    if(cs<n){
        e=(e+1)%n;
        a[e]=d;
        cs++;
    }
    else{
        cout<<"Overflow";
    }
}
void pop(){
    if(cs>0){
        f=(f+1)%n;
        cs--;
    }
    else{
        cout<<"Underflow";
    }
}
bool empty(){
    return cs==0;
}
int top(){
    return a[f];
}
};
int main(){
    Queue q(4);
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    while(!q.empty()){
        cout<<q.top()<<" ";
        q.pop();
    }

}
