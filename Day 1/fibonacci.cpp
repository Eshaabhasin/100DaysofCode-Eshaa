#include<iostream>
using namespace std;
int fibonacci(int n){
    if(n==0 || n==1){
        return n;
    }
    int smallproblem1=fibonacci(n-1);
    int smallerproblem2=fibonacci(n-2);
    return smallproblem1+smallerproblem2;
}
int main(){
    int n;
    cin>>n;
    cout<<fibonacci(n);
}