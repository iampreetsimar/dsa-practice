#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int N, num = 0, p = 1;
    cin>>N;
    
    while(N > 0) {
        int rem = N % 8;
        num += rem * p;
        p *= 10;
        N /= 8;
    }
    
    cout<<num;

	return 0;
}
