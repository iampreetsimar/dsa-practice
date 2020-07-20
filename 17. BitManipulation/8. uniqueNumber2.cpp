#include <iostream>
using namespace std;

void printUniqueNumber(int *a, int n) {
    int x = 0;
    for(int i = 0; i < n; i++) {
        x = (x ^ a[i]);
    }
    
    int pos = 0, temp = x;
    while((temp & 1) != 1) {
        pos++;
        temp = (temp >> 1);
    }
    
    int mask = (1 << pos);
    
    int m = 0, p = 0;
    for(int i = 0; i < n; i++) {
        if((a[i] & mask) > 0) {
            m = (m ^ a[i]);
        }
    }
    
    p = (x ^ m);
    
    cout<<min(m, p)<<" "<<max(m, p);
}

int main() {
	// your code goes here
    int n;
    cin>>n;
    
    int a[n];
    for(int i = 0; i < n; i++) {
        cin>>a[i];
    }
    
    printUniqueNumber(a, n);
    
	return 0;
}