#include <iostream>
using namespace std;

int movesRequired(int num) {
    int res = 0;
    
    while(num > 0) {
        num = (num & (num - 1));
        res++;
    }
    return res;
}

int main() {
	// your code goes here 
    int t;
    cin >> t;
    
    while(t--) {
        int num;
        cin >> num;
        
        cout<<movesRequired(num)<<endl;
    }
    
	return 0;
}