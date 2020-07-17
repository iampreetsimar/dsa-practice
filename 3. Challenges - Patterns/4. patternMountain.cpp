#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int N;
	cin>>N;
	
	int spaces = (2 * N) - 3;
	
	for(int row = 1; row <= N; row++) {
	    int col = 1;
	    while(col <= row) {
	        cout<<col<<'\t';
	        col++;
	    }
	    
	    col--;
	    
	    for(int sp = 1; sp <= spaces; sp++) {
	        cout<<" "<<"\t";
	    }
	    
	    if(row == N) {
	        col--;
	    }
	    
	    while(col > 0) {
	        cout<<col<<"\t";
	        col--;
	    }
	    
	    spaces -= 2;
	    cout<<endl;
	}
	return 0;
}
