#include <iostream>
using namespace std;

int fastPower(int a, int n) {
    if(n == 0)
        return 1;
        
    int smallAns = fastPower(a, n >> 1);
    smallAns *= smallAns;
    
    if(n & 1)
        return a * smallAns;
        
    return smallAns;
}

int main() {
	// your code goes here
    cout << fastPower(2, 3);
	
	return 0;
}
