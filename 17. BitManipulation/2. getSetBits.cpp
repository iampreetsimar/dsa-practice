#include <iostream>
using namespace std;

bool isOdd(int n) {
    return (n & 1);
}

int getBit(int n, int i) {
    int mask = (1 << i);
    return (n & mask) > 0 ? 1 : 0;
}

int setBit(int n, int i) {
    int mask = (1 << i);
    return (n | mask);
}

int main() {
	// your code goes here
    int n = 5;
    
    cout<<isOdd(n)<<endl;
    
    cout<<getBit(n, 2)<<endl;
	
	cout<<setBit(n, 1)<<endl;
	
	return 0;
}