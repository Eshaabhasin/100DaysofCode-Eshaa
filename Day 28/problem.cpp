#include <iostream>
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
        long long sum=0;
        for(int i=n-1;i>=0;i=i-2){
            sum+=a[i];
        }
        cout<<sum<<endl;
    }
	// your code goes here
	return 0;
}
