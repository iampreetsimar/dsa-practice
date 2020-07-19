#include <iostream>
#include <climits>
using namespace std;

bool isValid(int *r, int p, int L, int mid) {
    int totalP = 0;
    
    for(int i = 0; i < L; i++) {
        int totalTime = 0;
        int pMade = 1;
        while(totalTime <= mid) {
            totalTime += (pMade * r[i]);
            
            if(totalTime <= mid)
                pMade++;
        }
        pMade--;
        totalP += pMade;
    }
    
    if(totalP >= p)
        return true;
    else 
        return false;
}


int timeTaken(int *r, int p, int L) {
     
    int res = INT_MAX;
    int start = 0;
    
    int leastRank = INT_MAX;
    for(int i = 0; i < L; i++) {
        leastRank = min(leastRank, r[i]);
    }
    
    int end = 0;
    for(int i = 1; i <= p; i++) {
        end += (i * leastRank);
    }
    
    while(start <= end) {
        int mid = (start + end) >> 1;
        
        if(isValid(r, p, L, mid)) {
            res = min(res, mid);
            end = mid - 1;
        }
        else
            start = mid + 1;
    }
    return res;
}

int main() {
    int t;
    cin>>t;
    
    while(t--) {
        int p, L;
        cin>>p>>L;
        
        int r[L];
        for(int i = 0; i < L; i++) {
            cin>>r[i];
        }
        
        cout<<timeTaken(r, p, L)<<endl;
    }
    
	return 0;
}