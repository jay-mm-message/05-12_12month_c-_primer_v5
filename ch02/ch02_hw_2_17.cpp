#include <iostream>
using namespace std;

int i = 42;
int main() {
	int i = 100;
	int &ri = i;
	ri = ri + 2;

	int j = 45;
	int *p = &j;
	int &r2 = *p;

	p = nullptr;
	if (p) {
		cout << "p is true" << endl;
	} else {
		cout << "p is nullptr" << endl;
	}

	p = &j;
	if (p) {
		cout << "p is true" << endl;
	} else {
		cout << "p isn't nullptr" << endl;
	}

	// *p = 0;
	// if (*p) {
	// 	cout << "*p is true" << endl;
	// } else {
	// 	cout << "*p isn't true" << endl;
	// }

	cout << "r2 = " << r2 << endl;

	cout << "i = " << i << endl;
	cout << "ri = " << ri << endl;
	return 0;
}