#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int N;
	cin>>N;
    
    for(int row = 1; row <= N; row++) {
        int C = 1;
        
        for(int space = 1; space <= N - row + 1; space++) {
            cout<<" ";
        }
        
        for(int col = 1; col <= row; col++) {
            cout<<C<<" ";
            C = C * (row - col) / col;
        }
        cout<<endl;
    }
	return 0;
}
