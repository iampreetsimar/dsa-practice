#include <iostream>
using namespace std;

int movesRequired(int num) {
    int start = 1;
    
    if(num == 1)
        return 0;
        
    while(start <= num) {
        if(start * 2 > num) {
            return (1 + (num - start));
        }
        
        start *= 2;
    }
    return 0;
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