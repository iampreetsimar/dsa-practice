#include <iostream>
using namespace std;

int binarySearch(int *a, int s, int e, int key) {
    if(s > e)
        return -1;
        
    int mid = (s + e) >> 1;
    
    if(a[mid] == key)
        return mid;
    else if(a[mid] > key)
        return binarySearch(a, s, mid - 1, key);
    else
        return binarySearch(a, mid + 1, e, key);
}

int main() {
	// your code goes here
    int a[] = {1, 2, 3, 4, 5, 7};
    int n = sizeof(a) / sizeof(int);
    int key = 12;
	
    cout << binarySearch(a, 0, n - 1, key);
	
	return 0;
}
