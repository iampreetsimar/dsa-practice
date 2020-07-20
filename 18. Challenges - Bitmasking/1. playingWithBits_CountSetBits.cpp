#include <iostream>
using namespace std;


int main() {
	// your code goes here 
    int q;
    cin >> q;
    
    while(q--) {
        int a, b;
        cin >> a >> b;
        
        int res = 0;
        for(int i = a; i <= b; i++) {
            int temp = i;
            
            while(temp > 0) {
                temp = (temp & (temp - 1));
                res++;
            }
        }
        
        cout<<res<<endl;
    }
    
	return 0;
}