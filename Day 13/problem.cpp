//Codechef Problem:https://www.codechef.com/learn/BP00BC12_V2/problems/LBCV201?tab=statement

#include <bits/stdc++.h>
using namespace std;

int main() 
{
  int t;
  cin>>t;
  while(t--)
  {
    int A,B, C;
    cin>>A>>C;
    B=(A+C)/2;
    if(A%2==0 && C%2==0){
        cout<<B<<endl;
    }
    else if(A%2!=0 && C%2!=0){
        cout<<B<<endl;
    }
    else{
        cout<<-1<<endl;
    }

    
   }
 return 0;
}