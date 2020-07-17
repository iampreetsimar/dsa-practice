#include <iostream>
#include <climits>
using namespace std;

long long int maxElementInArray(int n) {
    long long int a[n];
    long long int maxEl = INT_MIN;
    
    for(int i = 0; i < n; i++) {
        cin>>a[i];
        maxEl = max(maxEl, a[i]);
    }
    
    return maxEl;
}

int main() {
    int n; 
    cin>>n; 
    
    cout<<maxElementInArray(n);
    
    return 0;
}