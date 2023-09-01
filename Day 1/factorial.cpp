#include<iostream>
using namespace std;
int factorial(int n){
    if(n==0){
        return 1;
    }
    int chotaans=factorial(n-1);
    int badanswer=n*chotaans;
    return badanswer;
}
int main(){
    int n;
    cin>>n;
    cout<<factorial(n);
}