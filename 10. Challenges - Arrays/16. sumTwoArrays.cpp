#include <iostream>
using namespace std;

void sumTwoArrays(int *ar1, int *ar2, int n, int m, int k) {
    int ar3[k];
    
    int i = n - 1, j = m - 1, l = k - 1;
    int carry = 0;
    
    while(i >= 0 and j >= 0) {
        int sum = ar1[i] +ar2[j] + carry;
        if(sum > 9) {
            ar3[l] = sum % 10;
            carry = sum / 10;
        }
        else {
            ar3[l] = sum;
            carry = 0;
        }
        l--;
        i--;
        j--;
    }
    
    while(i >= 0) {
        int sum = ar1[i] + carry;
        if(sum > 9) {
            ar3[l] = sum % 10;
            carry = sum / 10;
        }
        else {
            ar3[l] = sum;
            carry = 0;
        }
        l--;
        i--;
    }

    while(j >= 0) {
        int sum = ar2[j] + carry;
        if(sum > 9) {
            ar3[l] = sum % 10;
            carry = sum / 10;
        }
        else {
            ar3[l] = sum;
            carry = 0;
        }
        l--;
        j--;
    }
    
    ar3[l] = carry;
    
    for(int i = 0; i < k; i++) {
        if(i == 0 and ar3[i] == 0) continue;
        cout<<ar3[i]<<", ";
    }
    cout<<"END";
}

int main() {
    int n, m; 
    cin>>n;
    
    int ar1[n];
    for(int i = 0; i < n; i++) {
        cin>>ar1[i];
    }
    
    cin>>m;
    int ar2[m];
    for(int i = 0; i < m; i++) {
        cin>>ar2[i];
    }
    
    int k = (n > m) ? n + 1 : m + 1;
    
    sumTwoArrays(ar1, ar2, n , m, k);
    
    return 0;
}