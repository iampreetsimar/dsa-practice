#include <iostream>
using namespace std;

void camelCasePrint(string s) {
    cout<<s[0];
    for(int i = 1; s[i] != '\0'; i++) {
        if(isupper(s[i]))
            cout<<endl;
        
        cout<<s[i];
    }
}


int main() {
    string s;
    cin>>s;
    
    camelCasePrint(s);
    
    return 0;
}