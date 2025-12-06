#include <iostream>
using namespace std;

int main() {
	// 1 + .. + 10
	int i = 1;
	int sum = 0;
	while(cin >> i) {
		sum += i;
	}
	cout << "Sum is " << sum << endl; 
	return 0;
}