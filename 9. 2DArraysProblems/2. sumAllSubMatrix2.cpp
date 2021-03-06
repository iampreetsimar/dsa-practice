#include <iostream>
using namespace std;

int sumAllSubmatrix(int a[][100], int n) {
    int sum = 0;
    
    for(int li = 0; li < n; li++) {
        for(int lj = 0; lj < n; lj++) {
            for(int bi = li; bi < n; bi++) {
                for(int bj = lj; bj < n; bj++) {
                    int v = a[bi, bj];
                    int p = a[li - 1, bj];
                    int q = a[bi, lj - 1];
                    int r = a[li - 1, lj - 1];
                    sum += (v - p - q + r);
                }
            }
        }
    }
    
    return sum;
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
    
    // col - wise addition
    for(int i = 0; i < n; i++) {
        for(int j = 1; j < n; j++) {
            a[i][j] += a[i][j - 1];
        }
    }
    
    // row - wise addition
    for(int j = 0; j < n; j++) {
        for(int i = 1; i < n; i++) {
            a[i][j] += a[i - 1][j];
        }
    }
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    
    cout<<sumAllSubmatrix(a, n);
    
    return 0;
}