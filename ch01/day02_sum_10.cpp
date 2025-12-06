#include <iostream>
using namespace std;

int main() {
	// 1 + .. + 10
	int i = 1;
	int sum = 0;
	while(i <= 10) {
		sum += i;
		++i;
	}
	cout << "Sum of 1 to 10 inclusive is " << sum << endl; 
	return 0;
}