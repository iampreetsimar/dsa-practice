#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int N;
    cin>>N;
    
    int n1 = 0, n2 = 1;
    
    for(int row = 1; row <= N; row++) {
        for(int col = 1; col <= row; col++) {
            if (row == 1) {
                cout<<n1<<'\t';
            }
            else {
                cout<<n2<<'\t';
                
                int temp = n2;
                n2 = n2 + n1;
                n1 = temp;
            }
            

        }
        
        cout<<endl;
    }
	
	return 0;
}