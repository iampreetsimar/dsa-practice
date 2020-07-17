#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int x = 10;
	char a = 'a';
	
	int *xptr = &x;
	char *aptr = &a;
	
	cout<<x<<'\t'<<&x<<'\t'<<xptr<<'\t'<<*xptr<<'\t'<<*(&x)<<endl;
	cout<<a<<'\t'<<&a<<'\t'<<aptr<<endl;
	
	cout<<(void *)&a<<endl;
	
	cout<<*(&x) + 1<<endl;
	cout<<*(&x + 1)<<endl;
	return 0;
}
