#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int N;
	cin>>N;
	
	int decNum = 0;
	int p = 1;
	
	while (N > 0) {
	    int rem = N % 10;
	    decNum += rem * p;
	    p *= 2;
	    N /= 10;
	}
	
	cout<<decNum;

	return 0;
}
