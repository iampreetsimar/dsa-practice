#include <iostream>
#include <algorithm>
using namespace std;

bool compare(pair<string, int> a, pair<string, int> b) {
    if(a.second == b.second)
        return a.first < b.first;
    
    return a.second > b.second;
}

int main() {
	// your code goes here
    int x, n;
    cin >> x >> n;
    
    pair<string, int> p[n];
    for(int i = 0; i < n; i ++) {
        cin>>p[i].first>>p[i].second;
    }
    
    sort(p, p + n, compare);
    
    for(int i = 0; i < n; i++) {
        if(p[i].second >= x)
            cout<<p[i].first<<" "<<p[i].second<<endl;
    }
	
	return 0;
}
