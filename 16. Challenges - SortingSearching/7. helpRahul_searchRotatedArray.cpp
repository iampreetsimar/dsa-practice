#include <iostream>
using namespace std;

#define ll long long int

ll searchRotatedArray(ll *a, ll n, ll key) {
    ll start = 0;
    ll end = n - 1;
    
    while(start <= end) {
        int mid = (start + end) >> 1;
        
        if(a[mid] == key)
            return mid;
        else if(a[start] <= a[mid]) {
            if(key >= a[start] and key <= a[mid])
                end = mid - 1;
            else
                start = mid + 1;
        }
        else {
            if(key >= a[mid] and key <= a[end])
                start = mid + 1;
            else
                end = mid - 1;
        }
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
    
    ll key;
    cin>>key;
    
    cout<<searchRotatedArray(a, n, key);
	
	return 0;
}
