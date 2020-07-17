#include <iostream>
#include <algorithm>
using namespace std;

void spiralPrint(int a[][1000], int m, int n) {
    int startRow = 0, endRow = m - 1;
    int startCol = 0, endCol = n - 1;
    
    while(startRow <= endRow and startCol <= endCol) {
        for(int i = startCol; i <= endCol; i++) {
            cout<<a[startRow][i]<<" ";
        }
        startRow++;
        
        for(int i = startRow; i <= endRow; i++) {
            cout<<a[i][endCol]<<" ";
        }
        endCol--;
        
        if(startRow < endRow) {
            for(int i = endCol; i >= startCol; i--) {
                cout<<a[endRow][i]<<" ";
            }
            endRow--;            
        }

        if(startCol < endCol) {
            for(int i = endRow; i >= startRow; i--) {
                cout<<a[i][startCol]<<" ";
            }
            startCol++;
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
    
    
    spiralPrint(arr, m, n);

	return 0;
}
