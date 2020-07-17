#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int minF, maxF, step;
    
    cin>>minF>>maxF>>step;
    
    while( minF <= maxF) {
        float tempC = (5 * (minF - 32))/9;
        cout<<minF<<'\t'<<tempC<<endl;
        minF += step;
    }

	return 0;
}
