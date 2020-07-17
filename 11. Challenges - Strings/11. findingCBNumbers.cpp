#include <iostream>
#include <string>
using namespace std;

bool isValid(bool *visited, int start, int end) {
    for(int i = start; i < end; i++) {
        if(visited[i])
            return false;
    }
    return true;
}

bool cbCheck(long long sub, int start, int end) {
    if(sub == 0 or sub == 1)
        return false;
        
    int temp[] = {2,3,5,7,11,13,17,19,23,29};
    int size = sizeof(temp) / sizeof(int);
    
    for(int i = 0; i < size; i++) {
        if(sub == temp[i])
            return true;
    }
    
    for(int i = 0; i < size; i++) {
        if(sub % temp[i] == 0)
            return false;
    }
    
    return true;
}

int countCBNumbers(string s) {
    int count = 0;
    bool visited[100] = {false};
    
    for(int len = 1; len <= s.length(); len++) {
        for(int pos = 0; pos <= s.length() - len; pos++) {
            
            int end = pos + len;
            string sub = s.substr(pos,len);
            
            if(cbCheck(stoll(sub), pos, end) and isValid(visited, pos, end)) {
                
                count++;
                for(int i = pos; i < end; i++) {
                    visited[i] = true;
                }
            }
        }
    }
    return count;
}


int main() {
    int n;
    cin>>n;
    
    string s;
    cin>>s;
    
    cout<<countCBNumbers(s);
    
    return 0;
}