#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int N, digit, count = 0;
	cin>>N>>digit;
	
	while(N > 0) {
	    int rem = N % 10;
	    if (rem  == digit) count++;
	    
	    N /= 10;
	}
	
	cout<<count;

	return 0;
}
