#include <iostream>
using namespace std;

#define ll long long int
#define MAX_SIZE 100000000

bool p[1000000001];

void primeSieve() {
    for(ll i = 3; i <= MAX_SIZE; i += 2)
        p[i] = 1;
        
    for(ll i = 3; i <= MAX_SIZE; i += 2) {
        if(p[i]) {
	    // 2 * I as 'i' is odd so i * i will also be odd. But j + i will be even
            for(ll j = i * i; j <= MAX_SIZE; j += 2*i)
                p[j] = 0;
        }
    }
    
    p[2] = 1;
    p[1] = p[0] = 0;
}

ll nthPrime(ll n) {
    ll j = 1;
    ll res = 0;
    for(ll i = 0; i <= MAX_SIZE; i++) {
        if(p[i]) {
            if(j == n) {
                res = i;
                break;
            }
            j++;            
        }
    }
    
    return res;
}

int main() {
	// your code goes here 
	primeSieve();
	
    ll n;
    cin >> n;
    
    cout<<nthPrime(n);
    
	return 0;
}