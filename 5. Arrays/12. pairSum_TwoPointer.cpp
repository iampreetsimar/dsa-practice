#include <iostream>
#include <algorithm>
using namespace std;

void pairSum(int a[], int n, int key) {
    int i = 0, j = n-1;
    while(i < j) {
        int sum = a[i] + a[j];
        if(sum == key){
            cout<<a[i]<<" "<<a[j]<<endl;
            i++; j--;
        }
        else if(sum < key) {
            i++;
        }
        else j--;
    }
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
    
    pairSum(arr, N, key);

	return 0;
}
