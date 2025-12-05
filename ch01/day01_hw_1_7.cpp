#include <iostream>
using namespace std;

/*
	main function
	read two numbers and find their sum
*/

int main() {
	// prompt the user to entry two numbers
	cout << "Please provide two numbers: ";
	int v1 = 0, v2 = 0;	// a variable that store the data we read in
	cin >> v1 >> v2;	// read input data
	int sum = v1 + v2;
	cout << "The sum of ";
	cout << v1 << " and ";
	cout << v2 << " is ";
	cout << sum;
	cout << endl;
	return 0;
}