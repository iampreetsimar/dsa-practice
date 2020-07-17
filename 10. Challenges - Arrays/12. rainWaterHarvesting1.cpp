#include <iostream>
using namespace std;

int rainWaterHarvesting(int a[], int n) {
    int water = 0;
    
    for(int i = 1; i < n - 1; i++) {
        int left = a[i];
        for(int j = 0; j < i; j++) {
            left = max(left, a[j]);
        }
        
        int right = a[i];
        for(int j = i+1; j < n; j++) {
            right = max(right, a[j]);
        }
        
        water += (min(left, right) - a[i]);
    }
    return water;
}

int main() {
    int n; 
    cin>>n;
    
    int a[n];
    
    for(int i = 0; i < n; i++) {
        cin>>a[i];
    }
    
    cout<<rainWaterHarvesting(a, n);
    
    return 0;
}