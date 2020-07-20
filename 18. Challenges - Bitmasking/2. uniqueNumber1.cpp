#include <iostream>
using namespace std;


int main() {
	// your code goes here 
    int n;
    cin >> n;
    
    int uniqueNum = 0;
    for(int i = 0; i < n; i++) {
        int num;
        cin >> num;
        
        uniqueNum = (uniqueNum ^ num);
    }
    
    cout<<uniqueNum;
    
	return 0;
}