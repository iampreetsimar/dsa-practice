#include <iostream>
#include <algorithm>
using namespace std;

void targetSumPairs(int arr[], int n, int key) {
    sort(arr, arr + n);
    
    int i = 0, j = n - 1;
    
    while (i < j) {
        if(arr[i] + arr[j] == key) {
            cout<<arr[i]<<" and "<<arr[j]<<endl;
            i++;
            j--;
        }
        else if(arr[i] + arr[j] > key) 
            j--;
        else
            i++;
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
    
    targetSumPairs(arr, n, key);
    
    return 0;
}