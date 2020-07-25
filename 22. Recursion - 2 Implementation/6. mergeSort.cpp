#include <iostream>
using namespace std;

void merge(int *a, int s, int e) {
    int mid = (s + e) >> 1;
    int i = s, j = mid + 1, k = s;
    int temp[100];
    
    while(i <= mid and j <= e) {
        if(a[i] < a[j])
            temp[k++] = a[i++];
        else
            temp[k++] = a[j++];
    }
    
    while(i <= mid) {
        temp[k++] = a[i++];
    }
    
    while(j <= e) {
        temp[k++] = a[j++];
    }
    
    for(int i = s; i <= e; i++) {
        a[i] = temp[i];
    }
}

void mergeSort(int *a, int s, int e) {
    if(s >= e)
        return;
        
    int mid = (s + e) >> 1;
    
    mergeSort(a, s, mid);
    mergeSort(a, mid + 1, e);
    merge(a, s, e);
}

int main() {
	// your code goes here
    int a[] = {5, 6, 1, 2, 4, 7};
    int n = sizeof(a)/sizeof(int);
    
    mergeSort(a, 0, n - 1);
    for(int i = 0; i < n; i++) {
        cout << a[i] <<" ";
    }
	
	return 0;
}
