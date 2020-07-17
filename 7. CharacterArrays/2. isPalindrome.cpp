#include <iostream>
#include <cstring>
using namespace std;

bool isPalindrome(char a[]) {
    int i = 0;
    int j = strlen(a) - 1;
    
    while(i < j) {
        if(a[i] == a[j]) {
            i++, j--;
        }
        else return false;
    }
    
    return true;
}


int main() {
	// your code goes here
    char input[] = "abca";
    
    if(isPalindrome(input)) cout<<"True";
    else cout<<"False";
	
	return 0;
}
