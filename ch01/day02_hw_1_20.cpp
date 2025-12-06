#include <iostream>
#include "Sales_item.h"
using namespace std;

int main() {
	Sales_item book("0-201-70353-x", 4, 24.99);
	
	cout << book;
	cout << endl;

	return 0;
}