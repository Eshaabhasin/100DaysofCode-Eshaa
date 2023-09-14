//Codechef problem:https://www.codechef.com/practice/PCPPBM01/problems/SCALENE

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    if(a!=b && b!=c){
	        cout<<"YES"<<endl;
	}
	else{
	    cout<<"NO"<<endl;
	}
	}
	return 0;
}
