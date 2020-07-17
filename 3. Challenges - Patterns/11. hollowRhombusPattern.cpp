#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int N;
	cin>>N;
	
	int spaces = N-1;
	
	for(int row = 1; row <= N; row++) {
	    for(int sp = 1; sp <= spaces; sp++) {
	        cout<<" ";
	    }
	    
	    if(row == 1 or row == N) {
	        for(int col = 1; col <= N; col++) {
	            cout<<"*";
	        }
	    }
	    else {
	        cout<<"*";
	        for(int col = 1; col <= N - 2; col++) {
	            cout<<" ";
	        }
	        cout<<"*";
	    }
	    
	    cout<<endl;
	    spaces--;
	}
	return 0;
}
