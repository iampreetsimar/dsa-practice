#include <iostream>
#include <algorithm>
using namespace std;

bool isSubstring(string a, string b) {
    for(int i = 0; i < min(a.length(), b.length()); i++) {
        if(a[i] != b[i])
            return false;
    }
    return true;
}

bool compare(string a, string b) {
    if(isSubstring(a, b))
        return a.length() > b.length();
    
    return a < b;
}

int main() {
	// your code goes here
    int n;
    cin>>n;
    
    string s[n];
    for(int i = 0; i < n; i++) {
        cin>>s[i];
    }
    
    sort(s, s + n, compare);
    
    for(int i = 0; i < n; i++) {
        cout<<s[i]<<endl;
    }
	
	return 0;
}
