#include <iostream>
using namespace std;

bool incDecSeq(int N) {
    int prev;
    cin>>prev;
    
    bool isDecreasing = true;
    
    for(int i = 1; i <= N-1; i++) {
        int curr;
        cin>>curr;
        
        if (curr == prev) {
            return false;
        }
        else if(curr > prev) {
            isDecreasing = false;
        }
        else if(curr < prev and !isDecreasing) {
            return false;
        }
        
        prev = curr;
    }
    
    return true;
}

int main() {
	// your code goes here
	int N;
	cin>>N;
	
	incDecSeq(N) ? cout<<"true": cout<<"false";
	
	return 0;
}