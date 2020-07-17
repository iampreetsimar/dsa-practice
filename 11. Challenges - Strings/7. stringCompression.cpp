#include<iostream>
using namespace std;

int main() {
    string s;
    cin>>s;
    
    string res;
    int i = 0, count = 1;
    for(int curr = 1; s[curr] != '\0'; curr++) {
        if(s[i] == s[curr])
            count++;
        else {
            res += s[i];
            res += to_string(count);
            i = curr;
            count = 1;
        }
    }
    
    res += s[i];
    res += to_string(count);
    
    cout<<res;
		
	return 0;
}