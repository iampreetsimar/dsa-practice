#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// your code goes here
    int N;
    cin>>N;
    
    int num = 0, p = 1;
    while (N > 0) {
        int rem = N % 10;
        num += rem * p;
        p *= 2;
        N /= 10;
    }
    
    cout<<num;

	return 0;
}
