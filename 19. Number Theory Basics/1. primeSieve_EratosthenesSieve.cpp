#include <iostream>
using namespace std;

void primeSieve(int *p) {
    for(int i = 3; i <= 1000; i += 2) {
        p[i] = 1;
    }
    
    for(int i = 3; i <= 1000; i++) {
        if(p[i] == 1) {
            for(int j = i * i; j <= 1000; j += i) {
                p[j] = 0;
            }
        }
    }
    
    p[2] = 1;
    p[1] = p[0] = 0;
}

int main() {
	// your code goes here 
    int n;
    cin >> n;
    
    int p[1000] = {0};
    
    primeSieve(p);
    
    for(int i = 0; i < n; i++) {
        if(p[i] == 1)
            cout<<i<<" ";
    }
    
    
	return 0;
}