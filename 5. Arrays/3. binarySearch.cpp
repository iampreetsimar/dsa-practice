#include <iostream>
#include <climits>
using namespace std;

int binarySearch(int a[], int size, int key) {
    
    int start = 0;
    int end = size - 1;
    
    while(start <= end) {
        int mid = (start+end)/2;
        
        if(a[mid] == key) {
            return mid;
        }
        else if(a[mid] > key) {
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
    }
    return -1;
}


int main() {
	// your code goes here
	int N, key;
	cin>>N>>key;
    
    int arr[N];
    
    // Reading an array;
    for(int i = 0; i < N; i++) {
        cin>>arr[i];
    }
    
    cout<<binarySearch(arr, N, key);

	return 0;
}
