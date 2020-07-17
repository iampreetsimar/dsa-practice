#include <iostream>
#include <string>
using namespace std;

string compress(string s) {
    if(s.length() == 0)
        return "";
    
    char ch = s[0];
    int i = 1;
    while(i < s.length() and s[i] == ch) {
        i++;
    }
    
    string res = s.substr(i);
    res = compress(res);
    
    string count = to_string(i);
    return ch + count + res;
}

int main() {
    string s;
    cin>>s;
    
    cout<<compress(s);
		
	return 0;
}