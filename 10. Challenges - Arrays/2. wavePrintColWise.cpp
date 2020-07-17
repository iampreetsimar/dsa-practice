#include <iostream>
using namespace std;

void wavePrint(int arr[][100], int m, int n) {
    for(int col = 0; col < n; col++) {
        if (col % 2 == 0) {
            for(int row = 0; row < m; row++) {
                cout<<arr[row][col]<<", ";
            }
        }
        else {
            for(int row = m - 1; row >= 0; row--) {
                cout<<arr[row][col]<<", ";
            }
        }
    }
    cout<<"END";
}

int main() {
    int m,n; 
    cin>>m>>n; 
    
    int arr[100][100];
    
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin>>arr[i][j];
        }
    }
    
    wavePrint(arr, m, n);
    
    return 0;
}