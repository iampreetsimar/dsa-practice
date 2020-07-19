#include <iostream>
#include <climits>
using namespace std;

bool isValid(int *b, int n, int m, int mid) {
    int student = 1;
    int pagesRead = 0;
    
    for(int i = 0; i < n; i++) {
        if(pagesRead + b[i] > mid) {
            student++;
            pagesRead = b[i];
            
            if(student > m)
                return false;
        }
        else
            pagesRead += b[i];
    }
    return true;
}

int pagesAssigned(int *b, int n, int m) {
    int res = INT_MAX;
    int start = b[n - 1];
    
    int end = 0;
    for(int i = 0; i < n; i++) {
        end += b[i];
    }
    
    while(start <= end) {
        int mid = (start + end) >> 1;
        
        if(isValid(b, n, m, mid)) {
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
	int t;
	cin>>t;
	
	while(t--) {
	    int n, m;
	    cin>>n>>m;
	    
	    int b[n];
	    for(int i = 0; i < n; i++) {
	        cin>>b[i];
	    }
	    
	    cout<<pagesAssigned(b, n, m)<<endl;
	}
	return 0;
}
