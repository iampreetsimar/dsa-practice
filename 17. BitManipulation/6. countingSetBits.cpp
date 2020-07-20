#include <iostream>
using namespace std;

int findSetBits1(int n) {
    int res = 0;
    while(n > 0) {
        int lastBit = (n&1);
        if(lastBit)
            res++;
        
        n = (n >> 1);
    }
    return res;
}

int findSetBits2(int n) {
    int res = 0;
    while(n > 0) {
        n = (n & (n - 1));
        res++;
    }
    return res;
}

int main() {
	// your code goes here
    cout<<findSetBits1(13)<<endl;
    
    cout<<findSetBits2(13)<<endl;
    
    cout<<__builtin_popcount(13)<<endl;
    
	return 0;
}