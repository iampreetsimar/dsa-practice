#include <iostream>
using namespace std;

void primeSieve(int *p) {
    for(int i = 3; i <= 10000; i += 2) {
        p[i] = 1;
    }
    
    for(int i = 3; i <= 10000; i++) {
        if(p[i] == 1) {
            for(int j = i * i; j <= 10000; j += i) {
                p[j] = 0;
            }
        }
    }
    
    p[2] = 1;
    p[1] = p[0] = 0;
}

int main() {
	// your code goes here 
    int p[10005] = {0};
    
    primeSieve(p);
    
    int cSum[10005] = {0};
    for(int i = 1; i <= 10000; i++) {
        cSum[i] = cSum[i - 1] + p[i];
    }
    
    int t;
    cin >> t;
    
    while(t--) {
        int a, b;
        cin >> a >> b;
        
        cout << cSum[b] - cSum[a - 1] << endl;
    }
    
    
	return 0;
}