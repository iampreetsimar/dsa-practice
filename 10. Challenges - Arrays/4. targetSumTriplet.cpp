#include <iostream>
#include <algorithm>
using namespace std;

void targetSumTriplets(int *arr, int n, int key) {
    sort(arr, arr + n);
    
    for(int k = 0; k < n; k++) {
        
        int i = k + 1, j = n - 1;
        while (i < j) {
            if(arr[i] + arr[j] + arr[k] == key) {
                cout<<arr[k]<<", "<<arr[i]<<" and "<<arr[j]<<endl;
                i++;
                j--;
            }
            else if(arr[i] + arr[j] + arr[k] > key) 
                j--;
            else
                i++;
        }
    }
}

int main() {
    int n; 
    cin>>n; 
    
    int arr[1000];
    for(int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    int key;
    cin>>key;
    
    targetSumTriplets(arr, n, key);
    
    return 0;
}