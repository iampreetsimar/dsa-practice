#include<iostream>
using namespace std;

int main() {
	char ch;
	ch = cin.get();

	if(islower(ch))
		cout<<"L";
	else if(isupper(ch))
		cout<<"U";
	else
		cout<<"I";
		
	return 0;
}