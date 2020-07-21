#include <iostream>
using namespace std;

#define ll long long int

ll modularExponentiation(ll d, ll b, ll c) {
    if(d == 0)
        return 0;
    
    ll res = 1;
    
    while(b > 0) {
        int lastBit = (b & 1);
        if(lastBit) {
            res = ((res % c) * (d % c)) % c;
        }

        b = (b >> 1);
        d = ((d % c) * (d % c)) % c;
    }
    
    return res;
}

int main() {
	// your code goes here 
    ll a, b, c;
    cin >> a >> b >> c;
    
    ll d = a % c;
    
    cout<<modularExponentiation(d, b, c);
    
	return 0;
}