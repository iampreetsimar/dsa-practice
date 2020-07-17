#include <iostream>
using namespace std;

void spiralPrintAnti(int arr[][10], int m, int n) {
    int startCol = 0, endCol = n - 1, startRow = 0, endRow = m - 1;
    
    while(startRow <= endRow and startCol <= endCol) {
        for(int i = startRow; i <= endRow; i++) {
            cout<<arr[i][startCol]<<", ";
        }
        startCol++;
        
        for(int i = startCol; i <= endCol; i++) {
            cout<<arr[endRow][i]<<", ";
        }
        endRow--;
        
        while(startCol < endCol) {
            for(int i = endRow; i >= startRow; i--) {
                cout<<arr[i][endCol]<<", ";
            }
            endCol--;
        }
        
        while(startRow < endRow) {
            for(int i = endCol; i >= startCol; i--) {
                cout<<arr[startRow][i]<<", ";
            }
            startRow++;            
        }

    }
    cout<<"END";  
}

int main() {
    int m, n; 
    cin>>m>>n;
    
    int arr[10][10];
    
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin>>arr[i][j];
        }
    }
    
    spiralPrintAnti(arr, m, n);
}