#include <iostream>
#include <vector>
using namespace std;

#define ll long long int
#define MAX_LEN 1000000

bool p[1000001];
vector<int> primes;

void primeSieve() {
    for(ll i = 3; i <= MAX_LEN; i+= 2)
        p[i] = 1;
        
    for(ll i = 3; i <= MAX_LEN; i+= 2) {
        if(p[i]) {
            for(ll j = i * i; j <= MAX_LEN; j += 2*i)
                p[j] = 0;
        }
    }
    
    p[2] = 1;
    p[1] = p[0] = 0;
    
    primes.push_back(0);
    for(ll i = 0; i <= MAX_LEN; i++) {
        if(p[i])
            primes.push_back(i);
    }
}


int main() {
	// your code goes here 
    primeSieve();
    
    int t;
    cin >> t;
    
    while(t--) {
        ll a;
        cin >> a;
        
        cout<<primes[a]<<endl;
    }
    
	return 0;
}