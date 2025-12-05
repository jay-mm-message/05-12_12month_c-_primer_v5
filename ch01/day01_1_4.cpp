#include <iostream>
using namespace std;

int main() {
	cout << "Please provide two numbers: ";
	int v1 = 0, v2 = 0;
	cin >> v1 >> v2;
	int sum = v1 + v2;
	cout << "The sum of " << v1 << " and " << v2 << " is " << sum << endl;
	return 0;
}