#include <iostream>
#include <climits>
using namespace std;

bool isValid(int n, int m, int x, int y, int mid) {
    int reqCoupons = mid * x;
    int availCoupons = m + (y * (n - mid));
    
    if(reqCoupons <= availCoupons)
        return true;
    else
        return false;
}


int cbScholarship(int n, int m, int x, int y) {
     
    int res = INT_MIN;
    int start = 0, end = n;
    
    
    while(start <= end) {
        int mid = (start + end) >> 1;
        
        if(isValid(n, m, x, y, mid)) {
            res = max(res, mid);
            start = mid + 1;
        }
        else
            end = mid - 1;
    }
    return res;
}

int main() {
    
    int n, m, x, y;
    cin>>n>>m>>x>>y;
    
    cout<<cbScholarship(n, m, x, y);
    
	return 0;
}