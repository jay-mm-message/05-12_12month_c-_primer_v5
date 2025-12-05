#include <iostream>
using namespace std;

int main() {
	cout << "Enter two number: ";
	int v1 = 0, v2 = 0, sum = 0;
	
	cin >> v1;
	cin >> v2;

	sum = v1 + v2;
	cout << "The sum of " 
		<< v1 
		<< " and " 
		<< v2 
		<< " is "
		<< sum << endl;
	return 0;
}