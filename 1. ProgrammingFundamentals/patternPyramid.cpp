#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int N;
	cin>>N;
	
    int row = 1;
    while ( row <= N) {
        int  space = N - row;
        for(int i = 1; i <= space; i++) {
            cout<<' ';
        }
        
        int val = row;
        int j = 1;
        for(; j <= row; j++) {
            cout<<val;
            val++;
        }
        
        val -= 2;
        while ( val >= row ) {
            cout<<val;
            val--;
        }
        
        cout<<endl;
        row++;
    }

	return 0;
}
