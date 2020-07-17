#include <iostream>
using namespace std;

int main() {
	// your code goes here
	char ch;
	int N1, N2;
    do {
        cin>>ch;
        switch(ch) {
            case '+': cin>>N1>>N2;
                      cout<<N1+N2<<endl;
                      break;
                      
            case '-': cin>>N1>>N2;
                      cout<<N1-N2<<endl;
                      break;
                      
            case '*': cin>>N1>>N2;
                      cout<<N1*N2<<endl;
                      break;
                      
            case '/': cin>>N1>>N2;
                      cout<<N1/N2<<endl;
                      break;
                      
            case '%': cin>>N1>>N2;
                      cout<<N1%N2<<endl;
                      break;
                      
            case 'x':
            case 'X': break;
            
            default:  cout<<"Invalid operation. Try again."<<endl;
                      break;
        }
    } while (ch != 'X' and ch != 'x');

	return 0;
}
