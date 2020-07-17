#include <iostream>
#include <algorithm>
using namespace std;

void maxSubarraySum(int a[], int n) {
    int currSum = 0;
    int maxSum = 0;
    int left = -1, right = -1;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            currSum = 0;
            for(int k = i; k <= j; k++) {
                currSum += a[k];
            }
            if (currSum > maxSum) {
                maxSum = currSum;
                left = i;
                right = j;
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
    
    // Reading an array;
    for(int i = 0; i < N; i++) {
        cin>>arr[i];
    }
    
    maxSubarraySum(arr, N);

	return 0;
}
