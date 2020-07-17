#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int N;
	cin>>N;
	
	int spaces = 1;
	int count = N/2;
	
	for(int row = 1; row <= N; row++) {
	    if(row == 1 or row == N) {
	        for(int col = 1; col <= N; col++) {
	            cout<<"*"<<"\t";
	        }
	    }
	    else {
	        for(int col = 1; col <= count; col++) {
	            cout<<"*"<<"\t";
	        }
	        
	        for(int sp = 1; sp <= spaces; sp++) {
	            cout<<" "<<"\t";
	        }
	        
	        for(int col = 1; col <= count; col++) {
	            cout<<"*"<<"\t";
	        }
	        
	        if(row + 1 <= N/2 + 1){
	            spaces += 2;
	            count--;
	        }
	        else {
	            spaces -= 2;
	            count++;
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
