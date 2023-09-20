//Codechef Problem:https://www.codechef.com/START101D/problems/OFFBY1
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a;
	int b;
	cin>>a>>b;
	int z;
	string s1;
	z = a+b;
	s1=to_string(z)+'1';
	
    cout<<s1;
    
	return 0;
}