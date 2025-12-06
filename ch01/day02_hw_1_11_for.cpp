#include <iostream>
using namespace std;

int main() {
	int send = 10;
	// display valuse for all ranges
	int st = 5;
	cout << "begin: " << st;
	cout << ", end: " << send;

	cout << " , ";

	++st;
	for(; st < send ; ++st) {
		cout << st << ' ';
	}
	cout << " finish." << endl;
	return 0;
}