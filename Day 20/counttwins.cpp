#include<iostream>
using namespace std;
int counttwins(string s,int index){
    if(index>=s.size()-1){
        return 0;
    }
    if(s[index]==s[index+2]){
        return 1+counttwins(s,index+1);
    }
    else{
        return counttwins(s,index+1);
    }
}
int main(){
    string s;
    cin>>s;
    cout<<counttwins(s,0);
}