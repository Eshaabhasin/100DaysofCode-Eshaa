//Codechef Problem:https://www.codechef.com/practice/PCPPBM01/problems/CANDYSTORE?tab=statement

#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        if(y>x){
            cout<<x+(y-x)*2<<endl;
            
        }
        else{
            cout<<y<<endl;
        }
    }
    
	// your code goes here
	return 0;
}
