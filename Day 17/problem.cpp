//https://www.codechef.com/practice/PCPPST01/problems/HAPPYSTR
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int l=s.length();
        int c=0;
        for(int i=0;i<l;i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' ||s[i]=='u'){
                c++;
            if(c==3){
                cout<<"Happy"<<endl;
                break;
            }
                
        }
            else{
                c=0;
            }
        }
        if(c==0)
        cout<<"Sad"<<endl;
        
    }
    
	// your code goes here
	return 0;
}
