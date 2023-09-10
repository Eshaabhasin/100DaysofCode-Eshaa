#include<iostream>
using namespace std;
char arr[][10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
void integertostring(int no){
    if(no==0){
        return;
    }
    int lastdigit=no%10;
    integertostring(no/10);
    cout<<arr[lastdigit]<<" ";
}
int main(){
  integertostring(2048);
}