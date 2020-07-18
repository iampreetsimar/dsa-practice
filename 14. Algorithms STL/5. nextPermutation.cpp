#include <iostream>
using namespace std;

void reverse(int *a, int start, int end) {
    while(start < end) {
        swap(a[start], a[end]);
        start++;
        end--;
    }
}

void nextPermutation(int *a, int n) {
    if(n < 2 or n == NULL)
        return;
    
    int p = 0, q = 0;
    
    for(int i = n - 2; i >= 0; i--) {
        if(a[i] < a[i + 1]) {
            p = i;
            break;
        }
    }
    
    for(int i = n - 1; i > p; i--) {
        if(a[i] > a[p]) {
            q = i;
            break;
        }
    }
    
    if(p == 0 and q == 0) {
        reverse(a, 0, n - 1);
        return;
    }
    
    swap(a[p], a[q]);
    
    reverse(a, p + 1, n - 1);
}

int main() {
    int t;
    cin>>t;
    
    while(t--) {
        int n;
        cin>>n;
        
        int a[n];
        for(int i = 0; i < n; i++) {
            cin>>a[i];
        }
        
        nextPermutation(a, n);
    
        for(int i = 0; i < n; i++) {
            cout<<a[i]<<" ";
        }
        
        cout<<endl;
    }
    
	return 0;
}