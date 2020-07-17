#include <iostream>
using namespace std;

int medianSortedArrays(int arr1[], int arr2[], int n) {
    int i = 0, j = 0, k = 0;
    int arr3[2*n];
    
    while(k < 2*n) {
        if(arr1[i] < arr2[j]) {
            arr3[k] = arr1[i];
            i++;
        }
        else {
            arr3[k] = arr2[j];
            j++;
        }
        k++;
    }
    
    return arr3[(2*n - 1 )/ 2];
}

int main() {
    int n; 
    cin>>n;
    
    int arr1[n], arr2[n];
    
    for(int i = 0; i < n; i++) {
        cin>>arr1[i];
    }
    
    for(int i = 0; i < n; i++) {
        cin>>arr2[i];
    }
    
    cout<<medianSortedArrays(arr1, arr2, n);
    
    return 0;
}