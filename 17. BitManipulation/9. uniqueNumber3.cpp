#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int n;
    cin>>n;
    
    int count[64] = {0};
    int num;
    
    for(int i = 0; i < n; i++) {
        cin>>num;
        
        int j = 0;
        while(num > 0) {
            int lastBit = (num & 1);
            count[j] += lastBit;
            j++;
            num = (num >> 1);
        }
    }
    
    int res = 0, p = 1;
    for(int i = 0; i < 64; i++) {
        count[i] %= 3;
        res += (p * count[i]);
        p = (p << 1); 
    }
    
    cout<<res;
    
	return 0;
}