#include<iostream>
using namespace std;
bool issorted(int* a,int n){
    if(n==0 || n==1){
        return true;
    }
    if(a[n-2]<=a[n-1]&& issorted(a,n-1)==true){
        return true;
    }
    else{
        return false;
    }

}
int main(){
    int a[]={1,3,9,7};
    int n=sizeof(a)/sizeof(int);
    cout<<issorted(a,n);
}