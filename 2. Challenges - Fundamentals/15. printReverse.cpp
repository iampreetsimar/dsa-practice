#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// your code goes here
    int N;
    cin>>N;
    
    int reverse = 0, p = 10;
    while (N > 0) {
        int rem = N % 10;
        reverse = (reverse * p) + rem;
        N /= 10;
    }
    
    cout<<reverse;

	return 0;
}
