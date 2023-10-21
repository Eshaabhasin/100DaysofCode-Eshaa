#include<iostream>
using namespace std;
int fibonacci(int n){
    if(n<=1){
        return n;
    }
    return fibonacci(n-1)+fibonacci(n-2);


}
int topdown(int n,int *dp){
    if(n<=1){
        dp[n]=n;
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    return topdown(n-1,dp)+topdown(n-2,dp);

}
int bottomup(int n){
   int* dp = new int[n + 1];
	dp[0] = 0;
	dp[1] = 1;

	for (int i = 2; i <= n; ++i)
	{
		dp[i] = dp[i - 1] + dp[i - 2];
	}

	//for (int i = 0; i <= n; ++i)
	//{
		//cout  << dp[i] << " ";
	//}
	cout <<endl;
	return dp[n];

}
int main(){
    int n;
    cin>>n;
    int dp[1000];
    for(int i=0;i<=1000;i++){
        dp[i]=-1;
    }
    cout<<topdown(n,dp);
	cout << endl;
	cout << bottomup(n) << endl;

}