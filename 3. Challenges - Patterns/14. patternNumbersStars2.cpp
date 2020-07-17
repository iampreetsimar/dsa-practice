#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int N;
	cin>>N;
    
    for(int row = 1; row <= N; row++) {
        for(int col = 1; col <= row; col++) {
            cout<<col;
        }
        
        for(int star = 1; star <= N - row; star++) {
            cout<<"*";
        }
        
        cout<<endl;
    }
	return 0;
}
