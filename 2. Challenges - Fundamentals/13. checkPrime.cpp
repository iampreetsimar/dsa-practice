#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// your code goes here
    int N;
    bool flag = true;
    
    cin>>N;
    
    for(int i = 2; i <= N/2; i++) {
        if (N % i == 0) {
            cout<<"Not Prime";
            flag = false;
            break;
        }
    }
    
    if (flag) {
        cout<<"Prime";
    }

	return 0;
}
