#include <iostream>
#include <algorithm>
using namespace std;

void printAllSubarrays(int a[], int n) {
    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            for(int k = i; k <= j; k++) {
                cout<<a[k]<<" ";
            }
            cout<<endl;
        }
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
    
    printAllSubarrays(arr, N);

	return 0;
}
