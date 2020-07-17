#include <iostream>
#include <algorithm>
using namespace std;

void magicalPark(char a[][1000], int m, int n, int k, int S) {
    bool success = true;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(S < k) {
                success = false;
                cout<<"No";
                return;
            }
            
            char ch = a[i][j];
            if(ch == '*') S += 5;
            else if(ch == '.') S -= 2;
            else break;
            
            if(j != n-1) S--;
        }
    }
    
    if(success){
        cout<<"Yes"<<endl;
        cout<<S;
    }
}


int main() {
	// your code goes here
	int m, n, k, S;
	cin>>m>>n>>k>>S;
    
    char arr[1000][1000];
    
    // Reading an array;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin>>arr[i][j];
        }
    }
    
    magicalPark(arr, m, n, k, S);

	return 0;
}
