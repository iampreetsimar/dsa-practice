#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int N;
	cin>>N;
	int temp = N;
    for(int row = 1; row <= N; row++) {
        int col = 1;
        
        while(col <= temp) {
            cout<<col<<" ";
            col++;
        }
        
        if(row > 1) {
            int val = col;
            while(val <= N) {
                cout<<"*"<<" ";
                val++;
            }
            
            col = val - col - 1;
            int i = 1;
            while(i <= col and row > 2) {
                cout<<"*"<<" ";
                i++;
            }
        }
        
        cout<<endl;
        temp--;
    }
	return 0;
}
