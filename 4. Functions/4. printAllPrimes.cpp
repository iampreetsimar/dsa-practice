#include <iostream>
using namespace std;

bool isPrime(int n) {
    for(int i = 2; i <= n/2; i++) {
        if(n % i == 0) return false;
    }
    return true;
}

void printAllPrimes(int N) {
    for(int i = 2; i <= N; i++) {
        if(isPrime(i)) cout<<i<<" ";
    }
}

int main() {
	// your code goes here
	int N;
	cin>>N;
    
    printAllPrimes(N);
	return 0;
}
