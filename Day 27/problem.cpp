//https://www.codechef.com/practice/CPPSOR01A/problems/HORSES?tab=statement
#include <iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        long long min=1000000000; 
        for(int i=0;i<n-1;i++){
            if(a[i+1]-a[i]<min){
                min=a[i+1]-a[i];
            }
          
        }
          cout<<min<<endl;
            
    }
	
	return 0;
}
