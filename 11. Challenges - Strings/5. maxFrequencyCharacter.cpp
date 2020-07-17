#include<iostream>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    
    int a[256] = {0};
    for(int i = 0; s[i] != '\0'; i++) {
        a[s[i]]++;
    }
    
    int max = -1;
    char res;
    for(int i = 0; s[i] != '\0'; i++) {
        if(max < a[s[i]]) {
            max = a[s[i]];
            res = s[i];
        }
    }
    
    cout<<res;
		
	return 0;
}