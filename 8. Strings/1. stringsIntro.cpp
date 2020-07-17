#include <iostream>
#include <string>
using namespace std;

int main() {
	// your code goes here
	string s1;
	string s2("string 2");
	string s3 = "string 3";
	string s4(s2);
	
	cout<<s1<<endl<<s2<<endl<<s3<<endl<<s4<<endl;
	
	// if string empty
	if(s1.empty()) cout<<"string 1 empty"<<endl;
	
	// append
	s4 += " and string 4";
	cout<<s4<<endl;
	s4.append(" final");
	cout<<s4<<endl;
	
	// erase
	s4.clear();
	cout<<s4<<endl;
	
	// length
	cout<<s3.length();
	
	s1 > s2 ? cout<<"string 1 > string 2" : cout<<" string 2 > string 1";
	cout<<endl;
	
	// substring
	cout<<s2.find("ring")<<endl;
	
	// iterate using iterators
	for(auto it = s2.begin(); it != s2.end(); it++) {
	    cout<<(*it);
	}
	
	cout<<endl;
	
	// iterate using for each
	for(auto c : s2) {
	    cout<<c<<" ";
	}
	
	
	
	return 0;
}
