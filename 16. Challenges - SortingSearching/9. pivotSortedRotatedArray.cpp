#include <iostream>
using namespace std;

#define ll long long int

ll findPivot(ll *a, ll n) {
    ll start = 0, end = n - 1;
    
    if(a[start] <= a[end])
        return end;
    
    while(start <= end) {
        ll mid = (start + end) >> 1;
        
        if(mid < end and a[mid] > a[mid + 1])
            return mid;
            
        if(mid > start and a[mid] < a[mid - 1])
            return mid - 1;
        
        if(a[start] >= a[mid])
            end = mid - 1;
        else
            start = mid + 1;
    }
    return -1;
}


int main() {
	// your code goes here
    ll n;
    cin>> n;
    
    ll a[n];
    for(ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    cout<<findPivot(a, n);
	
	return 0;
}
