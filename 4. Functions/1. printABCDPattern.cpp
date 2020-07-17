#include <iostream>
using namespace std;

void printABCD(int N) {
    for(int row = 1; row <= N; row++) {
        int colCount = N - row + 1;
        char ch = 'A';
        for(int col = 1; col <= colCount; col++) {
            cout<<ch;
            ch++;
        }
        cout<<endl;
    }
}


int main() {
	// your code goes here
	int N;
	cin>>N;
    
    printABCD(N);
	return 0;
}
