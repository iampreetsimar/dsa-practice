#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int N, p;
	cin>>N>>p;
	
	float ans = 0, inc = 1.0;
	
	for(int i = 0; i <= p; i++) {
        while (ans * ans <= N) {
        	    ans += inc;
        	}
        	
        	ans -= inc;
        	inc /= 10;
	}
	
	cout<< ans;

	
	
    

	return 0;
}
