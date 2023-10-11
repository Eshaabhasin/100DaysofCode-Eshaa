#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int x;
        int y;
        cin>>x>>y;
        int z=x/y;
        if(z>=20){
            cout<<20<<endl;
        }
        else{
            cout<<z<<endl;
        }
    }
	// your code goes here
	return 0;
}
