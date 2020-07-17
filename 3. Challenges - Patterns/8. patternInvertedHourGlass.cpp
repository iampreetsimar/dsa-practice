#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int N;
	cin>>N;
	
	int totalRows = (2 * N) + 1;
	int spaces = 2 * N - 1;
	
	for(int row = 1; row <= totalRows; row++) {
	    int val = N;
	    int rowCount;
	    if(row <= N) {
	        rowCount = row;
	    }
	    else if(row > N+1) {
	        rowCount = totalRows + 1 - row;
	    }
	    else if (row == N+1) {
	        rowCount = N+1;
	    }
	    
	    for(int col = 1; col <= rowCount; col++) {
	        cout<<val<<" ";
	        val--;
	    }
	    
	    for(int sp = 1; sp <= spaces; sp++) {
	        cout<<" "<<" ";
	    }
	    
	    val++;
	    if (row == N +1) {
	        val++;
	        rowCount = N;
	    }
	    
	    for(int col = 1; col <= rowCount; col++) {
	        cout<<val<<" ";
	        val++;
	    }
	    
	    cout<<endl;
	    
	    if(row <= N) {
	        spaces -= 2;
	    }
	    else if (row >= N + 1) {
	        spaces += 2;
	    }
	}
	
	return 0;
}
