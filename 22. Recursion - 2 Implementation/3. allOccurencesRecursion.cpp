#include <iostream>
using namespace std;

void printAllOcc(int *a, int i, int n, int key) {
    if(i == n)
        return;
        
    if(a[i] == key)
        cout << i <<" ";
        
    printAllOcc(a, i + 1, n, key);
}

int storeAllOcc(int *a, int i, int n, int key, int *out, int j) {
    if(i == n)
        return j;
        
    if(a[i] == key) {
        out[j] = i;
        return storeAllOcc(a, i + 1, n, key, out, j + 1);
    }
    
    return storeAllOcc(a, i + 1, n, key, out, j);
}

int main() {
	// your code goes here
    int a[] = {1, 2, 3, 7, 0, 7};
    int n = sizeof(a)/sizeof(int);
    
    int out[100];
    
    printAllOcc(a, 0, n, 7);
    cout << endl;
    
    int count = storeAllOcc(a, 0, n, 7, out, 0);
    cout << count << endl;
    for(int i = 0; i < count; i++) {
        cout << out[i] <<" ";
    }
	
	return 0;
}
