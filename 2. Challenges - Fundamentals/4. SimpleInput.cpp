#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int sum = 0;
    
    while (sum >= 0) {
        int n;
        cin>>n;
        sum += n;
        
        if (sum < 0) {
            break;
        }
        
        cout<<n<<endl;
    }

	return 0;
}
