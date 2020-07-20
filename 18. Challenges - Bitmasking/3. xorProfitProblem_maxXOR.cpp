#include <iostream>
using namespace std;


int main() {
	// your code goes here 
    int x, y;
    cin >> x >> y;
    
    int xOR = x ^ y;
    
    int sigPos = 0;
    while(xOR) {
        sigPos++;
        xOR = (xOR >> 1);
    }
    
    int res = 0, m = 1;
    while(sigPos--) {
        res += m;
        m = (m << 1);
    }
    
    cout<<res;
    
	return 0;
}