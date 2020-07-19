#include <iostream>
using namespace std;

#define ll long long int

bool isPossible(ll n, ll k, ll mid) {
    ll power = 1;
    
    for(int i = 1; i <= k; i++) {
        if(power * mid > n)
            return false;
        
        power *= mid;
    }
    return true;
}

ll findKRoot(ll n, int k) {
    if(k == 1)
        return n;
    
    ll start = 1, end = 1000000;
    ll res = 0;
    
    while(start <= end) {
        ll mid = (start + end) >> 1;
        
        if(isPossible(n, k, mid)) {
            res = mid;
            start = mid + 1;
        }
        else
            end = mid - 1;
    }
    return res;
}


int main() {
	// your code goes here
    int t;
    cin >> t;
    
    while(t--) {
        ll n;
        int k;
        cin>>n>>k;
        
        cout<<findKRoot(n, k)<<endl;
    }
	
	return 0;
}
