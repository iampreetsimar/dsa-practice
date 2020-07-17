#include <iostream>
using namespace std;

int sanketStrings(string s, int k) {
    int left = 0, maxCount = 0, maxLength = 0;
    int temp[2] = {0};
    
    for(int right = 0; right < s.length(); right++) {
        temp[s[right] - 'a']++;
        maxCount = max(maxCount, temp[s[right] - 'a']);
        
        while(right - left - maxCount + 1 > k) {
            temp[s[left] - 'a']--;
            left++;
        }
        maxLength = max(maxLength, right - left + 1);
    }
    return maxLength;
}

int main() {
	// your code goes here
	int k;
	cin>>k;
	
	string s;
	cin>>s;
	
	cout<<sanketStrings(s, k);
	
	return 0;
}
