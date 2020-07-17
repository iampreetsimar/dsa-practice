#include <iostream>
#include <algorithm>
using namespace std;

void maxSubarraySum(int a[], int n) {
    int currSum = 0, maxSum = 0;
    
    for(int i = 0; i < n; i++) {
        currSum += a[i];
        if( currSum < 0) currSum = 0;
        
        maxSum = max(maxSum, currSum);
    }
    
    cout<<"Max sum is "<<maxSum<<endl;
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
    
    maxSubarraySum(arr, N);

	return 0;
}
