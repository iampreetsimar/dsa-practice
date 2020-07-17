#include <iostream>
using namespace std;

int rainWaterHarvesting(int a[], int n) {
    int water = 0;
    int i = 0, j = n - 1;
    int lMax = 0, rMax = 0;
    
    while(i <= j) {
        if(a[i] < a[j]) {
            if(a[i] > lMax) {
                lMax = a[i];
            }
            else {
                water += lMax - a[i];
            }
            i++;
        }
        else {
            if(a[j] > rMax) {
                rMax = a[j];
            }
            else {
                water += rMax - a[j];
            }
            j--;
        }
    }

    return water;
}

int main() {
    int n; 
    cin>>n;
    
    int a[n];
    
    for(int i = 0; i < n; i++) {
        cin>>a[i];
    }
    
    cout<<rainWaterHarvesting(a, n);
    
    return 0;
}