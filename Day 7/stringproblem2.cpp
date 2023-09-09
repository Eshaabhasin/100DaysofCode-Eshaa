//Codechef Problem https://www.codechef.com/practice/PCPPST01/problems/DNASTORAGE?tab=solution
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	string S;
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    cin>>S;
	    for(int i=0;i<S.length();i=i+2){
	        if(S[i]=='0' && S[i+1]=='0'){
	            cout<<'A';
	        }
	        else if(S[i]=='0' && S[i+1]=='1'){
	            cout<<'T';
	        }
	        else if(S[i]=='1' && S[i+1]=='0'){
	            cout<<'C';
	        }
	        else{
	            cout<<'G';
	        }
	        
	    }
	    cout<<endl;
	}
	
	return 0;
}
