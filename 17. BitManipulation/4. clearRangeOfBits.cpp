#include <iostream>
using namespace std;

int clearLastIBits(int n, int i) {
    int mask = (-1 << i  + 1);
    return (n & mask);
}

int clearRanjeItoJ(int n, int i, int j) {
    int a = (-1 << j + 1);
    int b = (1 << i) - 1;
    
    int mask = a | b;
    
    return (n & mask);
}

int main() {
	// your code goes here
    int n = 5;
    
    cout<<clearLastIBits(n, 1)<<endl;
    
    cout<<clearRanjeItoJ(31, 1, 3)<<endl;
	
	return 0;
}