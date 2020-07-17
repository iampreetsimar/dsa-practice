#include <iostream>
using namespace std;

void readline(char a[], int n, char delim) {
    int i = 0;
    char ch;
    ch = cin.get();
    while(ch != delim) {
        a[i] = ch;
        i++;
        if(i == n-1) break;
        ch = cin.get();
    }
    a[i] = '\0';
    
    cout<<a;
}
int main() {
	// your code goes here
	int a[] = {1,23,4};
	char b[] = {'a','b','c','\0'};
	
	char c[] = "hello world";
	
	cout<<a<<endl<<b<<endl<<c<<endl;
	cout<<sizeof(b)<<endl<<sizeof(c)<<endl;
	
	char readName[1000];
	
	readline(readName,50,'.');
	
	return 0;
}
