//https://www.codechef.com/practice/PCPPAR01/problems/LARGESECOND
#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
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
	    int ans=0;
	    for(int i=n-1;i>=0;i--){
	        if(a[i]==a[n-1]){
	            continue;
	        }
	        ans=a[i]+a[n-1];
	        break;
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
