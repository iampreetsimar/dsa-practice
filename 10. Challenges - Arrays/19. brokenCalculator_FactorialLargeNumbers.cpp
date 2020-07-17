#include <iostream>
using namespace std;

int multiply(int x, int *a, int size) {
    int carry = 0;
    
    for(int i = 0; i < size; i++) {
        int sum = a[i] * x + carry;
        a[i] = sum % 10;
        carry = sum / 10;
    }
    
    while(carry) {
        a[size] = carry % 10;
        carry /= 10;
        size++;
    }
    
    return size;
}

void factorial(int n) {
    int a[1000];
    a[0] = 1;
    int size = 1;
    
    for(int i = 2; i <= n; i++) {
        size = multiply(i, a, size);
    }
    
    for(int i = size - 1; i >= 0; i--) {
        cout<<a[i];
    }
}

int main() {
    int n;
    cin>>n;
    
    factorial(n);
    
    return 0;
}