#include <iostream>
#include <algorithm>
using namespace std;

void rotateImage(int a[][1000], int n) {
    for(int i = 0; i < n; i++) {
        int startCol = 0, endCol = n - 1;
        while(startCol < endCol) {
            swap(a[i][startCol], a[i][endCol]);
            startCol++;
            endCol--;
        }
    }
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i < j) {
                swap(a[i][j], a[j][i]);
            }
        }
    }
}

void rotateImageSTL(int a[][1000], int n) {
    for(int i = 0; i < n; i++) {
        reverse(a[i], a[i] + n);
    }
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i < j) {
                swap(a[i][j], a[j][i]);
            }
        }
    }
}

void displayArray(int a[][1000], int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}


int main() {
	// your code goes here
	int n;
	cin>>n;
    
    int arr[1000][1000];
    
    // Reading an array;
    int val = 1;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            arr[i][j] = val;
            val++;
        }
    }
    
    rotateImage(arr, n);
    displayArray(arr, n);
    cout<<endl;
    rotateImageSTL(arr, n);
    displayArray(arr, n);

	return 0;
}
