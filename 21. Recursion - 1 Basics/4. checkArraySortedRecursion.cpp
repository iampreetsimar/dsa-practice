#include <iostream>
using namespace std;

bool isSorted(int *a, int n) {
    if(n == 0 or n == 1)
        return true;
        
    if(a[0] < a[1])
        return isSorted(a + 1, n - 1);
    
    return false;
}

int main() {
	// your code goes here
    int a[] = {1, 2, 3, 14, 5};
    int n = sizeof(a) / sizeof(int);
	
    isSorted(a, n) ? cout << "true" : cout << "false";
	
	return 0;
}
