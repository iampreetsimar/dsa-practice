#include <iostream>
using namespace std;

int firstOcc(int *a, int n, int key) {
    if(n == 0)
        return -1;
        
    if(a[0] == key)
        return 0;
        
    int index = firstOcc(a + 1, n - 1, key);
    if(index == -1)
        return -1;
        
    return index + 1;
}

int main() {
	// your code goes here
    int a[] = {1, 2, 3, 17, 0, 17};
    int n = sizeof(a)/sizeof(int);
    
    cout << firstOcc(a, n, 7);
	
	return 0;
}
