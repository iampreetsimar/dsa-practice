#include <iostream>
using namespace std;

void printUniqueNumber(int *a, int n) {
    int res = 0;
    for(int i = 0; i < n; i++) {
        res ^= a[i];
    }
    
    int pos = 0, temp = res;
    while((temp & 1) != 1) {
        pos++;
        temp = (temp >> 1);
    }
    
    int mask = (1 << pos);
    
    int x = 0, y = 0;
    for(int i = 0; i < n; i++) {
        if((a[i] & mask) > 0) {
            x = (x ^ a[i]);
        }
    }
    
    y = (x ^ res);
    
    cout<<min(x, y)<<" "<<max(x, y);
}


int main() {
	// your code goes here 
    int n;
    cin >> n;
    
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    printUniqueNumber(a, n);
    
	return 0;
}