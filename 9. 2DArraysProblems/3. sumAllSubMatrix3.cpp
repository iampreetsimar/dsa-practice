#include <iostream>
using namespace std;

int sumAllSubmatrix(int a[][100], int n) {
    int sum = 0;
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            int x = (i + 1) * (j + 1);
            int y = (n - i) * (n - j);
            sum += (a[i][j] * x * y);
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