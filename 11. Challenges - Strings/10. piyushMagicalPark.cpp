#include <iostream>
using namespace std;

void magicalPark(char a[][100], int n, int m, int threshold, int strength) {
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(strength < threshold) {
                cout<<"No";
                return;
            }
                
            char ch = a[i][j];
            if(ch == '.')
                strength -= 2;
            else if(ch == '*')
                strength += 5;
            else    
                break;
            
            if(j != m - 1)
                strength -= 1;
        }
    }
    
    cout<<"Yes"<<endl<<strength;
}


int main() {
    int n, m, threshold, strength;
    cin>>n>>m>>threshold>>strength;
    
    char a[100][100];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin>>a[i][j];
        }
    }
    
    magicalPark(a, n, m, threshold, strength);
    
    return 0;
}