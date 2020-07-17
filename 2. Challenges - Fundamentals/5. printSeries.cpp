#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int n1, n2, i = 1;
    cin>>n1>>n2;
    
    while (n1 > 0) {
        int num = 3*i + 2;
        if( num % n2 != 0) {
            cout<<num<<endl;
            i++; n1--;
        }
        else {
            i++;
            continue;
        }
    }

	return 0;
}
