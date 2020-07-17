#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    
    string res;
    
    res = s[0];
    
    for(int i = 1; i < s.length(); i++) {
        res += to_string(s[i] - s[i - 1]);
        res += s[i];
    }
    
    cout<<res;
    
    return 0;
}