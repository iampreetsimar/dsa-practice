#include <iostream>
using namespace std;

int rainWaterHarvesting(int a[], int n) {
    int water = 0;
    
    int left[n], right[n];
    left[0] = a[0];
    right[n-1] = a[n-1];
    
    for(int i = 1; i < n; i++) {
        left[i] = max(left[i - 1], a[i]);
    }
    
    for(int i = n-2; i >= 0; i--) {
        right[i] = max(right[i+1], a[i]);
    }
    
    for(int i = 0; i < n; i++) {
        water += (min(left[i], right[i]) - a[i]);
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