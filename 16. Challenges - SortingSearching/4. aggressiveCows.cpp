#include <iostream>
#include <algorithm>
using namespace std;

bool isValid(int *s, int n, int c, int mid) {
    int cows = 1;
    int selected = s[0];
    
    for(int i = 1; i < n; i++) {
        if((s[i] - selected) >= mid) {
            selected = s[i];
            cows++;
            
            if(cows == c)
                return true;
        }
    }
    return false;
}

int findDistance(int *s, int n, int c) {
    int res = 0;
    int start = 0;
    
    sort(s, s + n);
    
    int end = s[n - 1] - 1;
    
    while(start <= end) {
        int mid = (start + end) >> 1;
        
        if(isValid(s, n, c, mid)) {
            res = mid;
            start = mid + 1;
        }
        else
            end = mid - 1;
    }
    return res;
}

int main() {
	// your code goes here
	int n, c;
	cin>>n>>c;
	
    int s[n];
    for(int i = 0; i < n; i++) {
        cin>>s[i];
    }
    
    cout<<findDistance(s, n, c);
    
	return 0;
}
