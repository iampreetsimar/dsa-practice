#include <iostream>
using namespace std;

int inversionCountMerge(int *a, int s, int e) {
    int mid = (s + e) >> 1;
    int i = s, j = mid + 1, k = s;
    int temp[100];
    
    int count = 0;
    
    while(i <= mid and j <= e) {
        if(a[i] <= a[j])
            temp[k++] = a[i++];
        else {
            count += mid - i + 1;
            temp[k++] = a[j++]; 
        }
    }
    
    while(i <= mid) {
        temp[k++] = a[i++];
    }
    
    while(j <= e) {
        temp[k++] = a[j++];
    }
    
    for(int i = s; i <= e; i++) {
        a[i] = temp[i];
    }
    
    return count;
}

int inversionCount(int *a, int s, int e) {
    if(s >= e)
        return 0;
        
    int mid = (s + e) >> 1;
    
    int x = inversionCount(a, s, mid);
    int y = inversionCount(a, mid + 1, e);
    int z = inversionCountMerge(a, s, e);
    
    return x + y + z;
}

int main() {
	// your code goes here
    int a[] = {1, 5, 2, 6, 3, 0};
    int n = sizeof(a)/sizeof(int);
    
    cout << inversionCount(a, 0, n - 1);
	
	return 0;
}
