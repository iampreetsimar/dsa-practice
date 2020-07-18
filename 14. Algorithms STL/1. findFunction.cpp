#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n = 5;
    int arr[] = {2,5,8,1,3};
    
    auto it = find(arr, arr + n, 0);
    int index = it - arr;
    
    if(index == n)
        cout<<"Element not present";
    else
        cout<<"Element at index "<<index;
	return 0;
}
