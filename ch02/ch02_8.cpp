#include <iostream>
using namespace std;
#include "Sales_item.h"
using SI = Sales_item;

int main() {
	SI box("01-12345", 2, 100);
	cout << "box: " << box << endl;
	return 0;
}