#include <iostream>
using namespace std;

void rotateImage(int arr[][1000], int n) {
    for(int row = 0; row < n; row++) {
        for(int col = 0; col < n/2; col++) {
            swap(arr[row][col], arr[row][n - col - 1]);
        }
    }

    for(int row = 0; row < n; row++) {
        for(int col = 0; col < n; col++) {
            if(row < col) {
                swap(arr[row][col], arr[col][row]);                
            }

        }
    }

}

int main() {
    int n; 
    cin>>n;
    
    int arr[1000][1000];
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin>>arr[i][j];
        }
    }
    
    rotateImage(arr, n);

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}