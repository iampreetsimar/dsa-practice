#include <iostream>
#include <climits>
using namespace std;

#define ll long long int

bool isValid(ll n, ll m, ll x, ll y, ll mid) {
    ll requiredCoup = mid * x;
    ll availCoup = m + (y * (n - mid));
    
    if(availCoup >= requiredCoup)
        return true;
    else return false;
}

ll maxStudentsWinning(ll n, ll m, ll x, ll y) {
    ll res = INT_MIN;
    ll start = 0, end = n;
    
    while(start <= end) {
        ll mid = (start + end) >> 1;
        
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
	// your code goes here
	ll n, m, x, y;
	cin >> n >> m >> x >> y;
	
	cout<<maxStudentsWinning(n, m, x, y);
	
	return 0;
}
