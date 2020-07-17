#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int N;
	cin>>N;
	
	int sum = 0;
	while (N > 0) {
	    int rem = N % 10;
	    sum += rem;
	    N /= 10;
	}
	
	cout<<"Sum is "<<sum<<endl;
	return 0;
}
