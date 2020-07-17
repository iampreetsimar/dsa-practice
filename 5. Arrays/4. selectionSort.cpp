#include <iostream>
#include <climits>
using namespace std;

void selectionSort(int a[], int size) {
    for(int i = 0; i < size - 1; i++) {
        int min = i;
        for(int j = i+1; j < size; j++) {
            if(a[j] < a[min]){
                min = j;
            }
        }
        swap(a[min], a[i]);
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
    
    selectionSort(arr, N);
    display(arr, N);

	return 0;
}
