#include <iostream>
#include "Sales_item.h"
using namespace std;

int main() {
	Sales_item book_a("0-201-78345-x", 3, 20.00);
	Sales_item book_b("0-201-78345-x", 2, 25.00);
	Sales_item sum;

	cout << "book_a: " << book_a << endl;
	cout << "book_b: " << book_b << endl;
	cout << endl;
	sum = book_a + book_b;
 	cout << "sum: " << sum << endl;
	return 0;
}