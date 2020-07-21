#include <iostream>
#include <cstring>
using namespace std;

int pref[10005];

int countDivisibleSubarrays(int *a, int n) {
    memset(pref, 0, sizeof(pref));
    
    pref[0] = 1;
    int sum = 0;
    
    for(int i = 0; i < n; i++) {
        sum += a[i];
        sum = (sum + n) % n;
        pref[sum]++;
    }
    
    int res = 0;
    for(int i = 0; i < n; i++) {
        int m = pref[i];
        res += (m * (m - 1) / 2);
    }
    
    return res;
}

int main() {
	// your code goes here 
    int n; 
    cin >> n;
    
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    cout<<countDivisibleSubarrays(a, n);

    
	return 0;
}