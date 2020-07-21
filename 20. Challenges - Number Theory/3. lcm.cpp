#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if(b == 0)
        return a;
        
    while(a % b != 0) {
        int rem = a % b;
        a = b;
        b = rem;
    }
    return b;
}

int main() {
	// your code goes here 
    int a, b;
    cin >> a >> b;
    
    int lcm = (a * b) / gcd(a, b);
    
    cout<<lcm;
    
	return 0;
}