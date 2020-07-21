#include <iostream>
using namespace std;

#define ll long long int
#define MAX_LEN 1000000

bool p[1000001];

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
}


int main() {
	// your code goes here 
    primeSieve();
    
    int cSum[MAX_LEN] = {0};
    cSum[0] = 0;
    
    for(ll i = 1; i <= MAX_LEN; i++) {
        cSum[i] = cSum[i - 1] + p[i];
        
    }
    
    int t;
    cin >> t;
    
    while(t--) {
        ll a , b;
        cin >> a >> b;
        
        int res = cSum[b] - cSum[a - 1];
        cout<<res<<endl;
    }
    
	return 0;
}