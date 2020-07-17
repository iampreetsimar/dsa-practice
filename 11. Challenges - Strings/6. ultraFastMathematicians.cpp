#include<iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    
    while(t--) {
        string s1;
        string s2;
        
        cin>>s1;
        cin>>s2;
        
        string res;
        
        for(int i = 0; s1[i] != '\0'; i++) {
            res += (s1[i] ^ s2[i]) ? '1' : '0';
        }
        
        cout<<res<<endl;
    }
		
	return 0;
}