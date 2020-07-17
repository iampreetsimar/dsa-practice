#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--) {
	    int c1, c2, c3, c4;
	    cin>>c1>>c2>>c3>>c4;
	    
	    int n, m;
	    cin>>n>>m;
	    
	    int rickshaw_cost = 0;
	    int cab_cost = 0;
	    
	    while(n--) {
	        int a;
	        cin>>a;
	        
	        rickshaw_cost += min(a * c1, c2);
	    }
	    
	    int totalRickshawCost = min(rickshaw_cost, c3);
	    
	    while(m--) {
	        int b;
	        cin>>b;
	        
	        cab_cost += min(b * c1, c2);
	    }
	    
	    int totalCabCost = min(cab_cost, c3);
	    
	    int totalRideCost = min(totalRickshawCost + totalCabCost, c4);
	    cout<<totalRideCost<<endl;
	    
	}
	
	
	return 0;
}