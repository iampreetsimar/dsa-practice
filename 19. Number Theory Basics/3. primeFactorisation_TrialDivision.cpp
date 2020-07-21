#include <iostream>
#include <vector>
using namespace std;

void findFactors_naiveApproach(int n) {
    // O(N)
    vector<pair<int, int>> factors;
    
    for(int i = 2; i <= n; i++) {
        if(n % i == 0) {
            int count = 0;
            while(n % i == 0) {
                count++;
                n /= i;
            }
            factors.push_back(make_pair(i, count));
        }
    }
    
    if(n != 1) {
        factors.push_back(make_pair(n, 1));
    }
    
    for(auto f : factors) {
        cout<<f.first <<"^" <<f.second<<endl;
    }
    
}

void findFactor_optimisedTrial(int n) {
    // O(rootN)
    vector<pair<int, int>> factors;
    
    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0) {
            int count = 0;
            while(n % i == 0) {
                count++;
                n /= i;
            }
            factors.push_back(make_pair(i, count));
        }
    }
    
    if(n != 1) 
        factors.push_back(make_pair(n, 1));
        
    for(auto f : factors) {
        cout<<f.first<<"^"<<f.second<<endl;
    }
}

int main() {
	// your code goes here 
    int n;
    cin >> n;
    
    // findFactors_naiveApproach(n);
    findFactor_optimisedTrial(n);
    
	return 0;
}