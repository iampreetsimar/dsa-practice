#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main() {
    char s[] = "Today is a rainy day";
    
    char *ptr = strtok(s, " ");
    cout<<ptr<<endl;
    
    while(ptr != NULL) {
        ptr = strtok(NULL, " ");
        cout<<ptr<<endl;
    }
}