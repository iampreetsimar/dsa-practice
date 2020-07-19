#include <iostream>
using namespace std;

float squareRootBinarySearch(int n, int p) {
    int start = 0, end = n;
    float res = -1;
    
    while(start <= end) {
        int mid = (start + end) >> 1;
        
        if(mid * mid == n)
            return mid;
        else if(mid * mid < n) {
            res = mid;
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    
    float inc = 0.1;
    for(int t = 1; t<= p; t++) {
        while(res * res <= n) {
            res += inc;
        }
        res -= inc;
        inc /= 10;
    }
    
    return res;
}

int main() {
    int n, p;
    cin>>n>> p;
    
    cout<<squareRootBinarySearch(n, p);
    
	return 0;
}