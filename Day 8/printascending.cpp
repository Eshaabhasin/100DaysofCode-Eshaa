#include<iostream>
using namespace std;
void printsum(int n){
    if(n==0){
        return ;
    }
    printsum(n-1);
    cout<<n;

}
int main(){
    int n;
    cin>>n;
    printsum(n);
}