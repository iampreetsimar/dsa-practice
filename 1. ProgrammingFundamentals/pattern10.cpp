#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int N, row = 1;
	cin>>N;
	
	while (row <= N) {
	    int col = 1;
	    
	    if (row % 2 != 0 ) {
	        while (col <= row) {
	            cout<<1;
	            col++;
	        }
	    }
	    else {
	        cout<<1;
	        while(col <= row-2) {
	            cout<<0;
	            col++;
	        }
	        cout<<1;
	    }
	    
	    cout<<endl;
	    row++;
	}

	return 0;
}
