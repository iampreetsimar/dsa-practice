#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int N;
	cin>>N;
	
	while(N--) {
	    int num;
	    cin>>num;
	    
	    int sumEven = 0, sumOdd = 0;
	    while(num > 0) {
	        int rem = num % 10;
	        if (rem % 2 == 0) {
	            sumEven += rem;
	        }
	        else {
	            sumOdd += rem;
	        }
	        num /= 10;
	    }
	    
	    if ((sumOdd % 3 == 0) or (sumEven % 4 == 0)) {
	        cout<<"Yes"<<endl;
	    }
	    else {
	        cout<<"No"<<endl;
	    }
	}
	return 0;
}
