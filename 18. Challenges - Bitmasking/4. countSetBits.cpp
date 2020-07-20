#include <iostream>
using namespace std;


int main() {
	// your code goes here 
    int t;
    cin >> t;
    
    while(t--) {
        int num;
        cin>> num;
        
        int res = 0;
        while(num) {
            num = (num & (num - 1));
            res++;
        }
        
        cout<<res<<endl;
    }
    
	return 0;
}