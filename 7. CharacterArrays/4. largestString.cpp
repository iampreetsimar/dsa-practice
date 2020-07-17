#include <iostream>
#include <cstring>
using namespace std;

int main() {
	// your code goes here
    int n;
    cin>>n;
    cin.get();
    
    char a[1000], largest[1000];
    int l;
    
    int largestLen = 0;
        
    for(int i = 0; i < n; i++) {
        cin.getline(a,1000);
        l = strlen(a);
        
        if(l > largestLen){
            strcpy(largest, a);
            largestLen = l;
        }
    }
    
    cout<<largest<<" "<<largestLen;
	
	return 0;
}
