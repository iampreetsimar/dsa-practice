#include <iostream>
using namespace std;

int decimalToBinary(int n) {
    int res = 0, p = 1;
    while(n > 0) {
        int lastBit = (n & 1);
        res += (p * lastBit);
        p *= 10;
        n = (n >> 1);
    }
    return res;
}

int main() {
	// your code goes here
    cout<<decimalToBinary(5)<<endl;
    
	return 0;
}