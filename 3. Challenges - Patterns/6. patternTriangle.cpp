#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int N;
	cin>>N;
	
    for(int row = 1; row <= N; row++) {
        for(int sp = row; sp <= N - 1; sp++) {
            cout<<" "<<'\t';
        }
        
        int val = row;
        for(int col = 1; col <= row; col++) {
            cout<<val<<"\t";
            val++;
        }
        
        val -= 2;
        while (val >= row) {
            cout<<val<<"\t";
            val--;
        }
        
        cout<<endl;
    }
	return 0;
}
