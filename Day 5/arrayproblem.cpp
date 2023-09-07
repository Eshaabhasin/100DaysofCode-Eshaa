//CodechefProblem:https://www.codechef.com/practice/PCPPAR01/problems/RUNCOMPARE


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    int b[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    for(int i=0;i<n;i++){
	        cin>>b[i];
	    }
	    int unhappy=0;
	    for(int i=0;i<n;i++){
	        if(a[i]>2*b[i] or b[i]>2*a[i]){
	              unhappy+=1;
	        }
	      
	    }
	    cout<<n-unhappy<<endl;
	    
	}
	
	return 0;
}
