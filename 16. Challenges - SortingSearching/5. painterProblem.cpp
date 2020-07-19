#include <iostream>
#include <climits>
using namespace std;

bool isValid(long long int *l, long long int n, long long int k, long long int mid) {
    long long int painter = 1;
    long long int bDone = 0;
    
    for(int i = 0; i < n; i++) {
        bDone += l[i];
        if(bDone > mid){
            painter++;
            bDone = l[i];
            
            if(painter > k)
                return false;
        }
    }
    return true;
}

long long int timeTaken(long long int *l, long long int n, long long int k) {
    long long int res = INT_MAX;
    
    long long int start = 0, end = 0;
    for(int i = 0; i < n; i++) {
        start = max(start, l[i]);
        end += l[i];
    }
    
    while(start <= end) {
        long long int mid = (start + end) >> 1;
        
        if(isValid(l, n, k, mid)) {
            res = min(res, mid);
            end = mid - 1;
        }
        else 
            start = mid + 1;
    }
    return res;
}

int main() {
	// your code goes here
	long long int n, k, t;
	cin>>n>>k>>t;
	
	long long int l[n];
	for(int i = 0; i < n; i++) {
	    cin>>l[i];
	}
	
	cout<<(timeTaken(l, n, k) * t) % 10000003;
	return 0;
}
