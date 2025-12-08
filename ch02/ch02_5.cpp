#include <iostream>
using namespace std;

int main() {
	int i = 100;
	int &ri = i;
	i = i + 1;
	
	cout << "ri: " << ri << endl;
	return 0;
}