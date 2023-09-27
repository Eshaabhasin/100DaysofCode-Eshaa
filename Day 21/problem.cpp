//https://www.codechef.com/problems/STOCKMARKET?tab=submissions
#include <bits/stdc++.h>
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
        int sum=0;
        for(int i=1;i<n;i++){
                sum+=a[i];
                
            }
             cout<<sum<<endl;
       
    }
	// your code goes here
	return 0;
}
