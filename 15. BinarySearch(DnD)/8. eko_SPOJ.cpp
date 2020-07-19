#include <iostream>
#include <climits>
using namespace std;

bool isValid(int *l, int n, int m, int mid) {
    int height = 0;
    
    for(int i = 0; i < n; i++) {
        if(l[i] < mid)
            continue;
        
        height += (l[i] - mid);
        
        if(height >= m)
            return true;
    }
    
    return false;
}


int maxHeight(int *l, int n, int m) {
     
    int res = INT_MIN;
    int start = 0;
    int end = INT_MIN;
    for(int i = 0; i < n; i++) {
        end = max(end, l[i]);
    }
    
    while(start <= end) {
        int mid = (start + end) >> 1;
        
        if(isValid(l, n, m, mid)) {
            res = max(res, mid);
            start = mid + 1;
        }
        else
            end = mid - 1;
    }
    return res;
}

int main() {
    
    int n, m;
    cin>>n>>m;
    
    int l[n];
    for(int i = 0; i < n; i++) {
        cin>>l[i];
    }
    
    cout<<maxHeight(l, n, m);
    
	return 0;
}