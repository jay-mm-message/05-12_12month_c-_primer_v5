#include <iostream>
using namespace std;

int main() {
	long double ld = 3.1415926536;
	//int a{ld};
	int a(ld);

	cout << "a: " << a << endl;
	return 0;
}