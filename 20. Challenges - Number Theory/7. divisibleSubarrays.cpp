#include <iostream>
#include <cstring>
using namespace std;

#define ll long long int

int freq[1000005];

int main() {
	// your code goes here 
    int t;
    cin >> t;
    
    while(t--) {
        int n, num;
        cin >> n;
        
        memset(freq, 0, sizeof(freq));
        freq[0] = 1;

        int sum = 0;
        
        for(int i = 0; i < n; i++) {
            cin >> num;
            
            sum += num;
            sum %= n;
            sum = (sum + n) % n;
            freq[sum]++;
        }
        
        ll res = 0;
        for(ll i = 0; i < n; i++) {
            ll m = freq[i];
            res += m * (m - 1) / 2;
        }
        
        cout<<res<<endl;
    }
    
	return 0;
}