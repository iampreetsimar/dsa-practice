#include <iostream>
using namespace std;

int main() {
	// your code goes here
    char a[][10] = {{'a','b','\0'},{'d','e','f','\0'}};
    cout<<a[0]<<" "<<a[1]<<endl;
    
    char b[][10] = {"ab", "def", "hello"};
    cout<<b[0]<<" "<<b[1]<<" "<<b[2]<<endl;
    
    char c[100][1000];
    int n;
    cin>>n;
    
    for(int i = 0; i < n; i++) {
        cin.getline(a[i], 1000);
    }
    
    for(int i = 0; i < n; i++) {
        cout<<a[i]<<endl;
    }

	return 0;
}
