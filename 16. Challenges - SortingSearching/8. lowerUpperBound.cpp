#include <iostream>
using namespace std;

#define ll long long int

ll upperBound(ll *a, ll n, ll key) {
    ll upperIndex = -1, start = 0, end = n - 1;
    
    while(start <= end) {
        ll mid = (start + end) >> 1;
        
        if(a[mid] == key) {
            upperIndex = mid;
            start = mid + 1;
        }
        else if(a[mid] > key)
            end = mid - 1;
        else
            start = mid + 1;
    }
    return upperIndex;    
}

ll lowerBound(ll *a, ll n, ll key) {
    ll lowerIndex = -1, start = 0, end = n - 1;
    
    while(start <= end) {
        ll mid = (start + end) >> 1;
        
        if(a[mid] == key) {
            lowerIndex = mid;
            end = mid - 1;
        }
        else if(a[mid] > key)
            end = mid - 1;
        else
            start = mid + 1;
    }
    return lowerIndex;
}

int main() {
	// your code goes here
    ll n;
    cin>> n;
    
    ll a[n];
    for(ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int t;
    cin>>t;
    
    while(t--) {
        ll key;
        cin>>key;
        
        cout<<lowerBound(a, n, key)<<" "<<upperBound(a, n, key)<<endl;
    }
	
	return 0;
}
