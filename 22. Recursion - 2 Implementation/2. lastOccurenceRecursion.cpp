#include <iostream>
using namespace std;

int lastOcc(int *a, int n, int key) {
    if(n == 0)
        return -1;
        
    int index = lastOcc(a + 1, n - 1, key);
    if(index == -1) {
        if(a[0] == key)
            return 0;
        else
            return -1;
    }
    
    return index + 1;
}

int main() {
	// your code goes here
    int a[] = {1, 2, 3, 7, 0, 7};
    int n = sizeof(a)/sizeof(int);
    
    cout << lastOcc(a, n, 7);
	
	return 0;
}
