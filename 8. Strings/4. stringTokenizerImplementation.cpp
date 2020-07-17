#include <iostream>
#include <cstring>
using namespace std;

char *myStrtok(char *str, char delim) {
    static char *input = NULL;
    if(input != NULL) input = str;
    
    if(input == NULL) return NULL;
    
    
    char *output = new char[strlen(input)];
    int i = 0;
    for(; input[i] != '\0'; i++) {
        if(input[i] != delim){
            output[i] = input[i];
        }
        else {
            output[i] = '\0';
            input += i + 1;
            return output;
        }
    }
    
    output[i] = '\0';
    input = NULL;
    return output;
}

int main() {
    char str[100] = "Hi, I am Simarpreet Singh";
    
    char *ptr = myStrtok(str, ' ');
    cout<<ptr<<endl;
    
    while(ptr != NULL) {
        ptr = myStrtok(NULL, ' ');
        cout<<ptr<<endl;
    }
    
}