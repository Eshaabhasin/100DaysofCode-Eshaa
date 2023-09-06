#include<iostream>
using namespace std;
int sum(int* a,int n){
    if(n==0){
        return n;
    }
    return a[0]+sum(a+1,n-1);

}
int main(){
    int a[]={1,4,5,8};
    int n=sizeof(a)/sizeof(int);
    cout<<sum(a,n);
}