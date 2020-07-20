#include <iostream>
using namespace std;

int clearRangeIJ(int n, int i, int j) {
    int a = (-1 << (j + 1));
    int b = (1 << i) - 1;
    int mask = a | b;
    return (n & mask);
}

int replaceBitsNM(int n, int m, int i, int j) {
    int cleared = clearRangeIJ(n, i, j);
    int mask = (m << i);
    return (cleared | mask);
}

int main() {
	// your code goes here
    int n = 15, i = 1, j = 3, m = 2;
    
    cout<<replaceBitsNM(n, m ,i, j);
	
	return 0;
}