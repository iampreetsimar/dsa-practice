#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// your code goes here
    int N;
    cin>>N;
    
    int count = 0, temp = N, sum = 0;
    
    while (temp > 0) {
        count++;
        temp /= 10;
    }
    
    temp = N;
    while(temp > 0) {
        int rem = temp % 10;
        sum += pow(rem, count);
        temp /= 10;
    }
    
    if (sum == N) cout<<"true";
    else cout<<"false";

	return 0;   
}
