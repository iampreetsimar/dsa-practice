#include <iostream>
using namespace std;

void maxSubArraySum1D(int t) {
    
    while(t--) {
        int N;
        cin>>N;
        
        int arr[N];
        for(int i = 0; i < N; i++) {
            cin>>arr[i];
        }
        
        int cSum = 0, maxSum = 0;
        for(int i = 0; i < N; i++) {
            cSum += arr[i];
            
            if(cSum < 0) cSum = 0;
            
            maxSum = max(cSum, maxSum);
        }
        
        cout<<maxSum<<endl;
    }
}

int main() {
    int t; 
    cin>>t; 
    
    maxSubArraySum1D(t);
    
}