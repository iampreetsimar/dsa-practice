#include <iostream>
using namespace std;

int kadane(int *arr, int n) {
    int cSum = 0, sum = 0;
    
    for(int i = 0; i < n; i++) {
        cSum += arr[i];
        
        if(cSum < 0) cSum = 0;
        
        sum = max(sum, cSum);
    }
    return sum;
}

int maxCircularSum(int *arr, int n) {
    int maxSum = kadane(arr, n);
    int sum = 0;
    
    for(int i = 0; i < n; i++) {
        sum += arr[i];
        arr[i] = -arr[i];
    }
    
    sum += kadane(arr, n);
    
    return (sum > maxSum) ? sum : maxSum;
}

int main() {
    int t; 
    cin>>t; 
    
    while(t--) {
        int n;
        cin>>n;
        
        int arr[n];
        for(int i = 0; i < n; i++) {
            cin>>arr[i];
        }
        
        cout<<maxCircularSum(arr, n)<<endl;
    }
}