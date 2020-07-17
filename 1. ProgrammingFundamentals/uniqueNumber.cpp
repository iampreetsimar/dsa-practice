#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int N;
	cin>>N;
	
    int ans = 0;
    
    for(int i = 0; i < N; i++) {
        int num;
        cin>>num;
        
        ans = (ans ^ num);
    }
    
    cout<<ans;

	return 0;
}
