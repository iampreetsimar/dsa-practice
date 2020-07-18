#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n = 6;
    int arr[] = {2,4,4,5,7,8};
    
    if(binary_search(arr, arr + n, 4)) {
        cout<<"Element present"<<endl;
        
        auto lb = lower_bound(arr, arr + n, 4);
        int indexLB = lb - arr;
        
        auto ub = upper_bound(arr, arr + n, 4);
        int indexUB = ub - arr;
        
        cout<<" LB index at "<<indexLB<<endl;
        cout<<" UB index at "<<indexUB<<endl;
        
        cout<<" No of occurences "<<indexUB - indexLB;
        
    }
    else
        cout<<"Element not present";

	return 0;
}
