#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long int N;
	cin>>N;
	
	long long int t1, t2;
	
	if (N <= 2) {
	    cout<<-1;
	    return 0;
	}
	else if (N % 2 == 0) {
	    t1 = ((N/2) * (N/2)) - 1;
	    t2 = ((N/2) * (N/2)) + 1;
	}
	else {
	    t1 = 2 * ((N+1)/2) * ((N-1)/2); 
	    t2 = (((N+1)/2)*((N+1)/2)) + (((N-1)/2) * ((N-1)/2)); 
	}
	
	if (t1 < t2) {
	    cout<<t1<<" "<<t2;
	}
	else {
	    cout<<t2<<" "<<t1;
	}
	
	return 0;
}