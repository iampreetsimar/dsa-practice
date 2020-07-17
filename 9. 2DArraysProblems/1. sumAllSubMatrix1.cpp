#include <iostream>
using namespace std;

int sumAllSubmatrix(int a[][100], int n) {
    int sum = 0;
    
    for(int li = 0; li < n; li++) {
        for(int lj = 0; lj < n; lj++) {
            for(int bi = li; bi < n; bi++) {
                for(int bj = lj; bj < n; bj++) {
                    for(int i = li; i <= bi; i++) {
                        for(int j = lj; j <= bj; j++) {
                            sum += a[i][j];
                        }
                    }
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
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    
    cout<<sumAllSubmatrix(a, n);
    
    return 0;
}