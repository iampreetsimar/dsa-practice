#include <iostream>
using namespace std;

int fibonacci(int N) {
    int a = 0;
    int b = 1;
    int c;
    for(int i = 1; i <= N - 2; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}


int main() {
	// your code goes here
	int N;
	cin>>N;
    
    cout<<fibonacci(N);
	return 0;
}
