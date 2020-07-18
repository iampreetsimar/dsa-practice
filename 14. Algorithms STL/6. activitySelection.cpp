#include <iostream>
#include <algorithm>
using namespace std;

bool compare(pair<int, int> a, pair<int, int> b) {
    return a.second < b.second;
}

int activitySelection(pair<int,int> *a, int n) {
    sort(a, a + n, compare);
    
    int count = 1, selected = 0;
    for(int i = 1; i < n; i++) {
        if(a[i].first >= a[selected].second) {
            count++;
            selected = i;
        }
    }
    return count;
}

int main() {
    int t;
    cin>>t;
    
    while(t--) {
        int n;
        cin>>n;
        int x, y;
        pair<int,int> a[n];
        for(int i = 0; i < n; i++) {
            cin>>x>>y;
            a[i] = make_pair(x, y);
        }
        
        cout<<activitySelection(a, n)<<endl;
    }
    
	return 0;
}
