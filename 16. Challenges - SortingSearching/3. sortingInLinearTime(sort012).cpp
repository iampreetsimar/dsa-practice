#include <iostream>
using namespace std;

void sort012(int *a, int n) {
    int left = 0, mid = 0, right = n - 1;
    
    while(mid <= right) {
        if(a[mid] == 0) {
            swap(a[left], a[mid]);
            left++;
            mid++;
        }
        else if(a[mid] == 2) {
            swap(a[right], a[mid]);
            right--;
        }
        else
            mid++;
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
    
    sort012(a, n);
    
    for(int i = 0; i < n; i++) {
        cout<<a[i]<<endl;
    }
	return 0;
}
