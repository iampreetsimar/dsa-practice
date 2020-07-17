#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int key) {
    
    for(int i = 0; i < size; i++) {
        if(arr[i] == key) return i;
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
    
    cout<<linearSearch(arr, N, key);

	return 0;
}
