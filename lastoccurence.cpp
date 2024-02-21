#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v(6);
    for(int i=0;i<6;i++){
        cin>>v[i];
    }
    int occurrence=-1;
    int x;
    cout<<"Enter x";
    cin>>x;
    for(int i=0;i<v.size();i++){
        if(v[i]==x){
            occurrence=i;
        }
       
    }
   cout<<occurrence;

}