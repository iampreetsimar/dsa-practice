#include <iostream>
#include <climits>
using namespace std;

void minMaxNumber(int arr[], int size) {
    
    int maxNum = INT_MIN;
    int minNum = INT_MAX;
    
    for(int i = 0; i < size; i++) {
        maxNum = max(maxNum, arr[i]);
        minNum = min(minNum, arr[i]);
    }
    
    cout<<"Max is "<<maxNum<<endl;
    cout<<"Min is "<<minNum<<endl;
    
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
    
    minMaxNumber(arr, N);

	return 0;
}
