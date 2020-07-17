#include <iostream>
#include <cstring>
using namespace std;

void removeConsecutiveDuplicates(char a[]) {
    int len = strlen(a);
    if(len == 1 or len == 0) return;
    
    int prev = 0;
    for(int curr = 1; curr < len; curr++) {
        if(a[curr] != a[prev]) {
            prev++;
            a[prev] = a[curr];
        }
    }
    
    a[prev + 1] = '\0';
}


int main() {
	// your code goes here
    char input[] = "coding";
    
    removeConsecutiveDuplicates(input);
    cout<<input;
	
	return 0;
}
