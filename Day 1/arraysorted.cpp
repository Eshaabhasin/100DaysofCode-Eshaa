#include<iostream>
using namespace std;
bool issorted(int *a,int n){
    if(n==1|| n==0){
        return true;
    }

    bool smallersorted=issorted(a+1,n-1);
    if(smallersorted==true and a[0]<=a[1]){
        return true;
    }
    else{
        return false;
    }


}
int main(){
    int a[]={1,4,5,6,8};
    int n=sizeof(a)/sizeof(int);
    bool ans=issorted(a,n);
    if(ans==true){
        cout<<"YES";

    }
    else{
        cout<<"NO";
    }
       
    }
    

