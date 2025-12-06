#include <iostream>
using namespace std;

int main() {
	int val = 0;
	int sum = 0;
	// 50 + ... + 100
	while(val <= 100) {
		sum += val;
		++val;
	}
	cout << "sum of 50 to 100 inclusive is "
		 << sum 
		 << endl;
	return 0;
}