#include <iostream>
#include <algorithm>
using namespace std;

void wavePrint(int a[][1000], int m, int n) {
    for(int col = 0; col < n; col++) {
        if(col % 2 == 0) {
            for(int row = 0; row < m; row++)
                cout<<a[row][col]<<" ";
        }
        else {
            for(int row = m-1; row >= 0; row--) {
                cout<<a[row][col]<<" ";
            }
        }
    }
}


int main() {
	// your code goes here
	int m, n;
	cin>>m>>n;
    
    int arr[1000][1000] = {0};
    
    // Reading an array;
    int val = 1;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            arr[i][j] = val;
            val++;
        }
    }
    
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    
    wavePrint(arr, m, n);

	return 0;
}
