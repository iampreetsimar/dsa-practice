#include <iostream>
#include <climits>
using namespace std;

bool isValid(int *l, int k, int n, int mid) {
    int painter = 1;
    int bDone = 0;
    
    for(int i = 0; i < n; i++) {
        if(bDone + l[i] > mid) {
            painter++;
            bDone = l[i];
            
            if(painter > k)
                return false;
        }
        else 
            bDone += l[i];
    }
    return true;
}


int timeTaken(int *l, int k, int n) {
     
    int res = INT_MIN;
    int start = l[n - 1];
    int end = 0;
    for(int i = 0; i < n; i++) {
        end += l[i];
    }
    
    while(start <= end) {
        int mid = (start + end) >> 1;
        
        if(isValid(l, k, n, mid)) {
            res = max(res, mid);
            end = mid - 1;
        }
        else
            start = mid + 1;
    }
    return res;
}

int main() {
    
    int k, n;
    cin>>k>>n;
    
    int l[n];
    for(int i = 0; i < n; i++) {
        cin>>l[i];
    }
    
    cout<<timeTaken(l, k, n);
    
	return 0;
}