#include <iostream>
using namespace std;

int trailingZeroes(int N) {
    int result = 0;
    for(int D = 5; N/D >= 1; D *= 5) {
        result += N/D;
    }
    return result;
}


int main() {
	// your code goes here
	int N;
	cin>>N;
    
    cout<<trailingZeroes(N);
	return 0;
}
