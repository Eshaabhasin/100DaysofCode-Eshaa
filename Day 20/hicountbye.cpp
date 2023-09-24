#include<bits/stdc++.h>
using namespace std;
int count(string s){
    int count=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='h'){
            if(s[i+1]=='i'){
                count++;

            }

        }
    }
    return count;
}
void remove(string s){
    int l=s.length();
    for(int i=0;i<l;){
        if(s[i]=='h'){
            if(s[i]+1=='i'){
                cout<<"";
                i=i+2;
            }
        else{
            cout<<s[i];
            i=i+1;
        }
    }
    else{
        cout<<s[i];
        i++;
    }

    }
    cout<<endl;
}
void replace(string s){
    int l=s.length();
    for(int i=0;i<l;){
        if(s[i]=='h'){
            if(s[i+1]=='i'){
                cout<<"bye";
                i=i+2;
            }
            else{
                cout<<s[i];
                i++;
            }

        }
        else{
            cout<<s[i];
            i++;
        }
    

    
}
cout<<endl;
}


int main(){
    string s;
    cin>>s;
    cout<<count(s)<<endl;
    remove(s);
    replace(s);

}