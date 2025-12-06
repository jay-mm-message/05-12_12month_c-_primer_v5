#include <iostream>
using namespace std;

int main() {
	int sum = 0;
	// 50 + ... + 100
	for(int val = 0 ; val <= 100 ; ++val) {
		sum += val;
	}
	cout << "sum of 50 to 100 inclusive is "
		 << sum 
		 << endl;
	return 0;
}