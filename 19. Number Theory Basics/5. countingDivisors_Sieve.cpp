#include <iostream>
#include <vector>
using namespace std;

void primeSieve(int *p, int n, vector<int> &primeList) {
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
    
    for(int i = 2; i <= n; i++) {
        if(p[i] == 1)
            primeList.push_back(i);
    }
}

void countingDivisors(int n, vector<int> &primeList) {
    int res = 1;
    
    int  i = 0;
    int p = primeList[i];
    
    while(p * p <= n) {
        if(n % p == 0) {
            int count = 0;
            while(n % p == 0) {
                count++;
                n /= p;
            }
            
            res *= (count + 1);
        }
        
        i++;
        p = primeList[i];
    }
    
    if(n != 1) {
        res *= 2;
    }
    
    cout<<res;
}

int main() {
	// your code goes here 
    
    int p[10005] = {0};
    vector<int> primeList;
    
    int n;
    cin >> n;
    
    primeSieve(p, n ,primeList);
    
    countingDivisors(n, primeList);

    

    
	return 0;
}