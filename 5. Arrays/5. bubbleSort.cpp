#include <iostream>
#include <climits>
using namespace std;

void bubbleSort(int a[], int size) {
    for(int i = 0; i < size - 1; i++) {
        for(int j = 0; j < size - i - 1; j++) {
            if(a[j] > a[j+1]) {
                swap(a[j],a[j+1]);
            }
        }
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
    
    bubbleSort(arr, N);
    display(arr, N);

	return 0;
}
