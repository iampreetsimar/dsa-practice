#include <iostream>
using namespace std;

int binarySearchRotatedArray(int *a, int n, int key) {
    int start = 0, end = n - 1;
    
    while(start <= end) {
        int mid = (start + end)/2;
        
        if(a[mid] == key) {
            return mid;
        }
        else if(a[start] <= a[mid]) {
            if(key >= a[start] and key <= a[mid])
                end = mid - 1;
            else
                start = mid + 1;
        }
        else {
            if(key >= a[mid] and key <= a[end])
                start = mid + 1;
            else
                end = mid - 1;
        }
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
    
    int key;
    cin>>key;
    
    cout<<binarySearchRotatedArray(a, n, key);
    
	return 0;
}