#include<iostream>
using namespace std;
int topdown(int n,int* dp){
    if(n==1){
        return dp[n]=0;
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    int op1,op2,op3;
    op1=op2=op3=INT_MAX;
    op1=topdown(n-1,dp);
    if(n%2==0){
        op2=topdown(n/2,dp);
    }
    if(n%3==0){
        op3=topdown(n/3,dp);
    }
    return dp[n]=min(op1,min(op2,op3))+1;

   
}

int bottomup(int n) {
	int dp[1000];

	dp[1] = 0;
	for (int i = 2; i <= n; ++i)
	{
		int op1, op2, op3;
		op1 = op2 = op3 = INT_MAX;
		if (i % 3 == 0) op1 = dp[i / 3];
		if (i % 2 == 0) op2 = dp[i / 2];
		op3 = dp[i - 1];

		dp[i] = min(op1, min(op2, op3)) + 1;
	}

	return dp[n];
}

int minstepsto1(int n){
    if(n==1){
        return 0;
    }
    int op1,op2,op3;
    op1=op2=op3=INT_MAX;
    op1=minstepsto1(n-1);
    if(n%2==0){
        op2=minstepsto1(n/2);
    }
    if(n%3==0){
        op3=minstepsto1(n/3);
    }
    return min(op1,min(op2,op3))+1;

   
}
int main(){
    int n;
    cin>>n;
    int dp[1000];
    for(int i=0;i<=n;i++){
        dp[i]=-1;
    }
    cout<<minstepsto1(n)<<endl;
    cout<<topdown(n,dp)<<endl;
    cout<<bottomup(n)<<endl;

}