#include <iostream>
using namespace std;

int main() {
	int i = 10;
	const int &j = i;
	i = 20;
	cout << "j = " << j << endl;
	cout << "i = " << i << endl;
	return 0;
}