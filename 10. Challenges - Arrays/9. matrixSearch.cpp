#include <iostream>
using namespace std;

bool matrixSearch(int arr[][30], int n, int m, int key) {
    int row = 0, col = m - 1;
    while(row < n and col >= 0) {
        if(arr[row][col] == key) 
            return true;
        else if(arr[row][col] < key) 
            row++;
        else 
            col--;
    }
    return false;
}

int main() {
    int n, m; 
    cin>>n>>m;
    
    int arr[30][30];
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin>>arr[i][j];
        }
    }
    
    int key;
    cin>>key;
    
    matrixSearch(arr, n, m, key) ? cout<<1 : cout<<0;
    
    return 0;
}