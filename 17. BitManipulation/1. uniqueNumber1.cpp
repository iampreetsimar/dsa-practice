#include <iostream>
using namespace std;


int main() {
	// your code goes here
    int n;
    cin >> n;
    
    int res = 0;
    
    for(int i = 0; i < n; i++) {
        int num;
        cin >> num;
        res = (res ^ num);
    }
    
    cout<<res;
	
	return 0;
}