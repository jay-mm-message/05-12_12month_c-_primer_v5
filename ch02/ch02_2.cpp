#include <iostream>
using namespace std;

int main() {
	unsigned u = 11;
	while(u > 0) {
		cout << u << ' ';
		--u;
	}
	cout << "finish" << endl;
	return 0;
}