#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int N;
    cin>>N;
    
    for(int row = 1; row <= N; row++) {
        if(row < 2) {
            cout<<1;
        }
        else {
            cout<<row-1;
            for(int col = 1; col <= row - 2; col++) {
                cout<<0;
            }
            cout<<row-1;
        }
        
        cout<<endl;
    }
	
	return 0;
}