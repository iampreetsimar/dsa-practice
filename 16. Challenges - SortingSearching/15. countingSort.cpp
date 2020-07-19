#include <iostream>
#include <climits>
using namespace std;

void countingSort(int *a, int n) {
    int maxEl = a[0];
    for(int i = 1; i < n; i++) {
        maxEl = max(maxEl, a[i]);
    }
    
    int freq[maxEl+1] = {0};
    
    for(int i = 0; i < n; i++) {
        freq[a[i]]++;
    }
    
    int i = 0;
    for(int j = 0; j <= maxEl; j++) {
        if(freq[j] != 0) {
            while(freq[j] > 0) {
                a[i] = j;
                freq[j]--;
                i++;
            }
        }
    }
}


int main() {
	// your code goes here
    int n;
    cin>>n;
    
    int a[n];
    for(int i = 0; i < n; i++) {
        cin>>a[i];
    }
    
    countingSort(a, n);
    
    for(int i = 0; i < n; i++) {
        cout<<a[i]<<" ";
    }
	
	return 0;
}
