#include <iostream>
#include <climits>
using namespace std;

void insertionSort(int a[], int size) {
    for(int i = 1; i < size; i++) {
        int e = a[i];
        int j = i - 1;
        while(j >= 0 and e < a[j]) {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = e;
    }
}

void display(int a[], int size) {
    for(int i = 0; i < size; i++) {
        cout<<a[i]<<" ";
    }
}


int main() {
	// your code goes here
	int N;
	cin>>N;
    
    int arr[N];
    
    // Reading an array;
    for(int i = 0; i < N; i++) {
        cin>>arr[i];
    }
    
    insertionSort(arr, N);
    display(arr, N);

	return 0;
}
