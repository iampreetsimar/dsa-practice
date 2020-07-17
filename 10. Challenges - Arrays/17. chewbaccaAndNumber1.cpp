#include <iostream>
using namespace std;

long long int chewbaccaAndNumber(long long int n) {
    long long int result = 0, p = 1;
    
    while(n > 0) {
        int rem = n % 10;
        n /= 10;
        if(n <= 0 and rem == 9) {
            result += (rem * p);
			break;
        }
        
        if(rem >= 5) {
            result += ((9 - rem) * p);
        }
        else {
            result += (rem * p);
        }
        p *= 10;
    }
    
    return result;
}

int main() {
    long long int n;
    cin>>n;
    
    cout<<chewbaccaAndNumber(n);
    return 0;
}