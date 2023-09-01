#include<iostream>
using namespace std;
int sum(int n){
    if(n==0){
        return 0;
    }
    int smallanswer=sum(n-1);
    int biganswer=n+smallanswer;
    return biganswer;
}



int main(){
    int n;
    cin>>n;
    cout<<sum(n);
    
}