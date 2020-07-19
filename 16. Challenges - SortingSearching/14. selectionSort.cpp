#include <iostream>
using namespace std;

void selectionSort(int *a, int n) {
    for(int i = 0; i < n - 1; i++) {
        int small = i;
        for(int j = i + 1; j < n; j++) {
            if(a[j] < a[small])
                small = j;
        }
        swap(a[i], a[small]);
    }
}


int main() {
	// your code goes here
    int n;
    cin>>n;
    
    int a[n];
    for(int i = 0; i < n; i++) {
        cin>>a[i];
    }
    
    selectionSort(a, n);
    
    for(int i = 0; i < n; i++) {
        cout<<a[i]<<endl;
    }
	
	return 0;
}