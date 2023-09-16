//Codechef Problem: https://www.codechef.com/DSAPREP_01/problems/KNGATK
#include <iostream>
#include<algorithm>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        cout<<a[1]<<endl;
        
        
        
    }
	// your code goes here
	return 0;
}
