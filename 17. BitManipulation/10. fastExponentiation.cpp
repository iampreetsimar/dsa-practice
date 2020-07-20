#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int a, n;
    cin>>a>>n;
    
    int res = 1;
    
    while(n > 0) {
        int lastBit = (n & 1);
        if(lastBit)
            res *= a;
        
        a *= a;
        n = (n >> 1);
    }
    
    cout<<res;
    
	return 0;
}