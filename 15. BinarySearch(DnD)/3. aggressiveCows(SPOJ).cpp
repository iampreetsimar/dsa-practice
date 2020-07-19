#include <iostream>
using namespace std;

bool canPlaceCows(int *stalls, int n, int cows, int sep) {
    int last_cow = stalls[0];
    int count = 1;
    
    for(int i = 1; i < n; i++) {
        if(stalls[i] - last_cow >= sep) {
            last_cow = stalls[i];
            count++;
            
            if(count == cows)
                return true;
        }
    }
    return false;
}
  

int main() {
    int stalls[] = {1,2,4,8,9};  // after sorting
    int n = 5, cows = 3;
    int res = 0;
    
    int start = 0, end = stalls[n - 1] - stalls [0];
    
    while(start <= end) {
        int mid = (start + end) >> 1;
        
        if(canPlaceCows(stalls, n, cows, mid)) {
            res = mid;
            start = mid + 1;
        }
        else
            end = mid - 1;
    }
    
    cout<<res;
	return 0;
}