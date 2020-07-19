#include <iostream>
using namespace std;

int binarySearch(int *a, int n, int m) {
    int s = 0;
    int e = n - 1;
    
    while(s <= e) {
        int mid = (s + e) >> 1;
        
        if(a[mid] == m)
            return mid;
        else if(a[mid] > m)
            e = mid - 1;
        else
            s = mid + 1;
    }
    return -1;
}

int main() {
    
    int n;
    cin>>n;
    
    int a[n];
    for(int i = 0; i < n; i++) {
        cin>>a[i];
    }
    
    int m;
    cin>>m;
    
    cout<<binarySearch(a, n, m);
    
	// your code goes here
	return 0;
}
