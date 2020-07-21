#include <iostream>
#include <vector>
#include <bitset>
using namespace std;

#define ll long long int

vector<int> primes;
bitset<10005> b;

const int n = 10000;

void primeSieve() {
    b.set();
    
    b[0] = b[1] = 0;
    
    for(int i = 2; i <= n; i++) {
        if(b[i]) {
            for(int j = i * i; j <= n; j += i) {
                b[j] = 0;
            }
        }
    }
    
    for(int i = 0; i <= n; i++) {
        if(b[i])
            primes.push_back(i);
    }
}

bool checkLargePrime(ll num) {
    if (num <= n)
        return b[num] == 1 ? 1 : 0;

    for(ll i = 0; primes[i] * (ll)primes[i] <= num; i++) {
        if(num % primes[i] == 0)
            return false;
    }
    
    return true;
}

int main() {
	// your code goes here 
    
    ll num;
    cin >> num;
    
    primeSieve();
    cout<<checkLargePrime(num);
    

    
	return 0;
}