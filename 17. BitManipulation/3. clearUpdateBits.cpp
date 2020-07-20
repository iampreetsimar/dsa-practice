#include <iostream>
using namespace std;

int clearBit(int n, int i) {
    int mask = ~(1 << i);
    return (n & mask);
}

int updateBits(int n, int i, int v) {
    int clearMask = ~(1 << i);
    int clearedN = (n & clearMask);
    
    int mask = (v << i);
    return (clearedN | mask);
}

int main() {
	// your code goes here
    int n = 5;
    
    cout<<clearBit(n, 2)<<endl;
    
    cout<<updateBits(n, 1, 1)<<endl;
	
	return 0;
}