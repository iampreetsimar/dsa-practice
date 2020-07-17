#include <iostream>
#include <algorithm>
using namespace std;

void maxSubarraySum(int a[],int cSum[], int n) {
    int currSum = 0, maxSum = 0, left = -1, right = -1;
    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            currSum = cSum[j] - cSum[i - 1];
            
            if(currSum > maxSum) {
                maxSum = currSum;
                left = i; right = j;
            }
        }
    }
    
    cout<<"Max sum is "<<maxSum<<endl;
    for(int i = left; i <= right; i++) {
        cout<<a[i]<<" ";
    }
}


int main() {
	// your code goes here
	int N;
	cin>>N;
    
    int arr[N];
    int cSum[N];
    
    // Reading an array;
    cin>>arr[0];
    cSum[0] = arr[0];
    for(int i = 1; i < N; i++) {
        cin>>arr[i];
        cSum[i] = arr[i] + cSum[i - 1];
    }
    
    maxSubarraySum(arr, cSum, N);

	return 0;
}
