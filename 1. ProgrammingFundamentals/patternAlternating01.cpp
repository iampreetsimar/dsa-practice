#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int N;
	cin>>N;
	
	for(int row = 1; row <= N; row++) {
	    int val = row % 2 ? 0 : 1;
	    for(int col = 1; col <= row; col++) {
	        cout<<val;
	        val = 1 - val;
	    }
	    
	    cout<<endl;
	}

	return 0;
}
