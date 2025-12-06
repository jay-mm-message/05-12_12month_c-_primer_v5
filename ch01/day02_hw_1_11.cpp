#include <iostream>
using namespace std;

int main() {
	int st = 5;
	int send = 10;
	// display valuse for all ranges
	cout << "begin: " << st;
	cout << ", end: " << send;

	cout << " , ";
	++st;
	while( st < send) {
		cout << st << ' ';
		++st;
	}
	cout << " finish." << endl;
	return 0;
}