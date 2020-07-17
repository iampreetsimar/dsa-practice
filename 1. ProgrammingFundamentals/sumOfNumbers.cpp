#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int N;
	cin>>N;
	
	int i = 1, sum = 0;
	while (i<=N) {
	    sum += i;
	    i++;
	}
	
	cout<<"Sum is "<<sum<<endl;
	return 0;
}
