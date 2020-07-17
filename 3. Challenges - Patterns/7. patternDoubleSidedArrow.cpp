#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int N;
	cin>>N;
	
    int bSpaces = N - 1;
    int mSpaces = -1;
    
    for(int row = 1; row <= N/2 + 1; row++) {
        for(int sp = 1; sp <= bSpaces; sp++) {
            cout<<" "<<" ";
        }
        
        int col = row;
        while(col >= 1) {
            cout<<col<<" ";
            col--;
        }
        
        for(int mp = 1; mp <= mSpaces; mp++) {
            cout<<" "<<" ";
        }
        
        col++;
        while(col <= row and row > 1) {
            cout<<col<<" ";
            col++;
        }
        
        bSpaces -= 2;
        mSpaces += 2;
        cout<<endl;
    }
    
    bSpaces += 4;
    mSpaces -= 4;
    for(int row = N/2 + 2; row <= N; row++) {
        for(int sp = 1; sp <= bSpaces; sp++) {
            cout<<" "<<" ";
        } 
        
        int col = N - row + 1;
        while(col >= 1) {
            cout<<col<<" ";
            col--;
        }
        
        for(int mp = 1; mp <= mSpaces; mp++) {
            cout<<" "<<" ";
        }
        
        col++;
        while(col <= N - row + 1 and row < N) {
            cout<<col<<" ";
            col++;
        }
        
        bSpaces += 2;
        mSpaces -= 2;
        cout<<endl;
    }
	return 0;
}
