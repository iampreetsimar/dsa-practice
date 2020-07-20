#include <iostream>
using namespace std;

int main() {
	// your code goes here 
    int n;
    cin >> n;
    
    int count[64] = {0};
    
    for(int i = 0; i < n; i++) {
        int num;
        cin >> num;
        
        int j = 0;
        while(num > 0) {
            count[j] += (num & 1);
            num = (num >> 1);
            j++;
        }
    }
    
    int res = 0, p = 1;
    for(int i = 0; i < 64; i++) {
        count[i] %= 3;
        
        res += (count[i] * p);
        p = (p << 1);
    }
    
    cout<<res;
    
	return 0;
}