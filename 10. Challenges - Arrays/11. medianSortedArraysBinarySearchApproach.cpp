#include <iostream>
using namespace std;

int medianSortedArraysBetterApproach(int arr1[], int arr2[], int n) {
    int lo1 = 0, hi1 = n - 1, lo2 = 0, hi2 = n -  1;
    
    if(n == 1) return (arr1[0] + arr2[0]) >> 1;
    
    while(true) {
        int median1, median2, m1, m2;
        
        median1 = arr1[(hi1 + lo1) >> 1];
        median2 = arr2[(hi2 + lo2) >> 1];
        
        m1 = (hi1 + lo1) >> 1;
        m2 = (hi2 + lo2) >> 1;
        
        if(hi1 - lo1 == 1) {
            return ((max(arr1[0], arr2[0]) + min(arr1[1], arr2[1])))/2;
        }
        
        if(median1 == median2) return median1;
        
        if(m1 > m2) {
            hi1 = m1;
            lo2 = m2;
        }
        else {
            lo1 = m1;
            hi2 = m2;
        }
    }
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
    
    cout<<medianSortedArraysBetterApproach(arr1, arr2, n);
    
    return 0;
}