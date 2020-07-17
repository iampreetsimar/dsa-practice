#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int N;
	cin>>N;
	
    for(int row = 1; row <= N; row++) {
        if (row > 1) {
            cout<<row<<"\t";
            for(int col = 1; col <= row - 2; col++) {
                cout<<0<<"\t";
            }
            cout<<row;
        }
        else {
            cout<<row;
        }
        
        cout<<endl;
    }
	return 0;
}
