#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int N;
	cin>>N;
	
    for(int row = 1; row <= N; row++) {
        if (row == 1) {
            for(int col = 1; col <= N/2 + 1; col++) {
                if (col == 1 or col == N/2 + 1) cout<<"*";
                else cout<<" ";
            }
            
            for(int col = N/2 + 2; col <= N; col++) {
                cout<<"*";
            }
        }
        else if(row > 1 and row <= N/2) {
            for(int col = 1; col <= N/2 + 1; col++) {
                if (col == 1 or col == N/2 + 1) cout<<"*";
                else cout<<" ";
            }
        }
        else if(row == N/2 + 1) {
            for(int col = 1; col <= N; col++) {
                cout<<"*";
            }
        }
        else if(row > N/2 + 1 and row < N) {
            for(int col = 1; col < N/2 + 1; col++) {
                cout<<" ";
            }
            
            for(int col = N/2 + 1; col <= N; col++) {
                if(col == N/2 + 1 or col == N) cout<<"*";
                else cout<<" ";
            }
        }
        else {
            for(int col = 1; col < N/2 + 1; col++) {
                cout<<"*";
            }
            
            for(int col = N/2 + 1; col <= N; col++) {
                if(col == N/2 + 1 or col == N) cout<<"*";
                else cout<<" ";
            }
        }
        
        cout<<endl;
    }
	
	return 0;
}
