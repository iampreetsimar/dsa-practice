#include <iostream>
using namespace std;

void bubbleSort(int *a, int n) {
    if(n == 0)
        return;
        
    for(int j = 0; j < n - 1; j++) {
        if(a[j] > a[j + 1])
            swap(a[j], a[j + 1]);
    }
    
    bubbleSort(a, n - 1);
}

void bubbleSort_recursive(int *b, int n, int j) {
    if(n == 0)
        return;
        
    if(j == n - 1)
        return bubbleSort_recursive(b, n - 1, 0);
        
    if(b[j] > b[j + 1])
        swap(b[j], b[j + 1]);
        
    bubbleSort_recursive(b, n, j + 1);
}

int main() {
	// your code goes here
    int a[] = {5, 4, 3, 1, 2};
    int n = sizeof(a)/sizeof(int);
    
    bubbleSort(a, n);
    for(int i = 0; i < n; i++) {
        cout << a[i] <<" ";
    }
    
    cout << endl;
    
    int b[] = {5, 4, 3, 1, 2};
    bubbleSort_recursive(b, n, 0);
    for(int i = 0; i < n; i++) {
        cout << b[i] <<" ";
    }
	
	return 0;
}
