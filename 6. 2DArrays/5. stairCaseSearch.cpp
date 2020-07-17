#include <iostream>
#include <algorithm>
using namespace std;

int stairCaseSearch(int a[][1000], int n, int key) {
    int i = 0, j = n - 1;
    while(i < n and  j >= 0) {
        if(key == a[i][j]) {
            cout<<i<<" "<<j;
            return 0;
        }
        else if(key > a[i][j])
            i++;
        else
            j--;
    }
    
    return -1;
}

int main() {
	// your code goes here
	int n, key;
	cin>>n>>key;
    
    int arr[1000][1000];
    
    // Reading an array;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin>>arr[i][j];
        }
    }
    
    cout<<stairCaseSearch(arr, n, key);

	return 0;
}
