#include <iostream>
using namespace std;

int fact(int n) {
    int ans = 1;
    for(int i = 1; i <= n; i++) {
        ans *= i;
    }
    return ans;
}

int binomial(int N, int r) {
    return fact(N)/(fact(N - r) * fact(r));
}

int main() {
	// your code goes here
	int N, r;
	cin>>N>>r;
    
    cout<<binomial(N,r);
	return 0;
}
