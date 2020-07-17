#include<iostream>
using namespace std;

int main() {
	char ch;
	ch = cin.get();

	if(ch >= 'a' and ch <= 'z')
		cout<<"lowercase";
	else if(ch >= 'A' and ch <= 'Z')
		cout<<"UPPERCASE";
	else
		cout<<"Invalid";
		
	return 0;
}