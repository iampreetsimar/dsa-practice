#include <iostream>
using namespace std;

void dynamic2DArray() {
    int n;
    cin>>n;
    
    int **arr = new int *[n];
    
    for(int i = 0; i < n; i++) {
        arr[i] = new int[i + 1];
    }
    
    int val = 1;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < i + 1; j++) {
            arr[i][j] = val++;
        }
    }
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < i + 1; j++) {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    cout<<endl<<arr<<endl;
    cout<<arr[1];
}

int main() {
	// your code goes here
    // int n;
    // cin>>n;
    
    // int *a = new int[n];
    
    // for(int i = 0; i < n ; i++) {
    //     cin>>a[i];
    // }
    
    // cout<<a<<endl;
    
    // for(int i = 0; i < n ; i++) {
    //     cout<<a[i];
    // }
    // cout<<endl;
    
    // cout<<sizeof(a)<<endl;
    
    // for(int i = 0; i < n ; i++) {
    //     cout<<*(a + i + 1);
    // }
    // cout<<endl;    
    
    
    // delete [] a;
    
    dynamic2DArray();
    
	return 0;
}
