#include <iostream>
using namespace std;

#define ll long long int

int main() {
	// your code goes here 
	ll primes[] = {2, 3, 5, 7, 11, 13, 17, 19};
    ll n; 
    cin >> n;

    ll subLen = (1 << 8) - 1;
    ll res = 0;
    
    for(int i = 1; i <= subLen; i++) {
        ll denom = 1;
        int setBits = __builtin_popcount(i);
        
        for(ll j = 0; j <= subLen; j++) {
            if(i & (1 << j))
                denom *= primes[j];
        }
        
        if(setBits & 1)
            res += n / denom;
        else
            res -= n / denom;
    }

    cout<<res;
    
	return 0;
}