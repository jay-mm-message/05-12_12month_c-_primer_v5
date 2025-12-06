#include <iostream>
using namespace std;

int main() {
	int val = 10;
	while( val >= 0 ) {
		cout << "The variable is "
			<< val
			<< endl;
		--val;
	}
	return 0;
}