#include <iostream>
using namespace std;

int sum = 42;
int main() {
	int i = 100, sum = 0;
	for(int i = 0 ; i != 10 ; ++i) {
		sum += i;
	}
	cout << "sum = " << ::sum << endl;
	return 0;
}