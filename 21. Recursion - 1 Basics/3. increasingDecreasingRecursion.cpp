#include <iostream>
using namespace std;

void decreasing(int n) {
    if(n == 0)
        return;
    
    cout << n <<" ";
    decreasing(n - 1);
}

void increasing(int n) {
    if(n == 0)
        return;
        
    increasing(n - 1);
    cout << n <<" ";
}

int main() {
	// your code goes here
	int n; 
	cin >> n;
	
	increasing(n); 
	cout << endl;
	decreasing(n);
	
	return 0;
}
