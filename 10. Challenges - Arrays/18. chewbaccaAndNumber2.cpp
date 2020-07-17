#include <iostream>
using namespace std;
void chewbaccaAndNumber(char *a) {
    int i = 0;
    if(a[i] == '9')
        i++;
        
    for(; a[i] != '\0'; i++) {
        int d = a[i] - '0';
        if( d>= 5) {
            d = 9 - d;
            a[i] = d + '0';
        }
    }
    
    cout<<a;
}

int main() {
    char a[50];
    cin>>a;
    
    chewbaccaAndNumber(a);
    return 0;
}