#include <iostream>
#include <algorithm>
using namespace std;

bool compare(int a, int b) {
    return a < b;
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
    
    sort(arr, arr + N, compare);
    display(arr, N);

	return 0;
}
