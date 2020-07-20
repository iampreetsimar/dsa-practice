#include <iostream>
#include <cstring>
using namespace std;

void filterChars(int i, char *a) {
    int j = 0;
    
    while(i > 0) {
        int lastBit = (i & 1);
        if(lastBit) {
            cout<<a[j];
        }
        j++;
        i = (i >> 1);
    }
}

void printSubsets(char *a) {
    int n = strlen(a);
    
    for(int i = 0; i < (1 << n); i++) {
        filterChars(i, a);
        cout<<endl;
    }
}

int main() {
	// your code goes here 
	char a[1000];
	cin>>a;
	
	printSubsets(a);
    
	return 0;
}