#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int N;
	cin>>N;
	
	for(int i = 0; i < N; i++) {
	    int num, sum = 0, p = 1;
	    
	    cin>>num;
	    
	    while(num > 0) {
	        int rem = num % 10;
	        sum += rem * p;
	        p *= 2;
	        num /= 10;
	    }
	    
	    cout<<sum<<endl;
	}

	return 0;
}
