//Codechef Problem:https://www.codechef.com/practice/PCPPBM01/problems/FAVOURITENUM
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int A;
	    cin>>A;
	    if(A%7==0 and A%2==0){
	        cout<<"Alice"<<endl;
	    }
	    else if(A&2!=0 and A%9==0){
	        cout<<"Bob"<<endl;
	    }
	    else{
	        cout<<"Charlie"<<endl;
	    }
	}
	return 0;
}
