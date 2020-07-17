#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// your code goes here
    int a, b, c;
    cin>>a>>b>>c;
    
    int det = (b*b) - (4 * a * c);
    
    if (det < 0) {
        cout<<"Imaginary"<<endl;
    }
    else if (det == 0) {
        int x = ((-b) + sqrt(det))/(2.0 * a);
        cout<<"Real and Equal"<<endl;
        cout<<x<<" "<<x;
    }
    else {
        int x1 = ((-b) + sqrt(det))/(2.0 * a);
        int x2 = ((-b) - sqrt(det))/(2.0 * a);
        
        if (x1 > x2) {
            cout<<"Real and Distinct"<<endl;
            cout<<x2<<" "<<x1;
        }
        else {
            cout<<"Real and Distinct"<<endl;
            cout<<x1<<" "<<x2;
        }
    }

	return 0;
}
