#include <iostream>
#include <climits>
using namespace std;

int maxSumSubMatrix(int a[][100], int n) {
    int maxSum = INT_MIN;
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            maxSum = max(maxSum, a[i][j]);
        }
    }
    return maxSum;
}

int main() {
    int n; 
    cin>>n; 
    
    int a[100][100];
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin>>a[i][j];
        }
    }
    
    //row - wise addition
    for(int i = n - 2; i >= 0; i--) {
        for(int j = n - 1; j >= 0; j--) {
            a[i][j] += a[i + 1][j];
        }
    }
    
    // col - wise addition
    for(int j = n - 2; j >= 0; j--) {
        for(int i = n - 1; i >= 0; i--) {
            a[i][j] += a[i][j +  1];
        }
    }
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    
    cout<<maxSumSubMatrix(a, n);
    
    return 0;
}