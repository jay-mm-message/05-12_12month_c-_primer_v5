#include <iostream>
#include "Sales_item.h"
using namespace std;

#define CASE 1
int main() {
	Sales_item book_a("0-201-78345-x", 3, 20.00);
	Sales_item book_b("0-201-78356-x", 2, 25.00);
	Sales_item book_c("0-201-78345-x", 3, 20.00);

#if CASE == 1
	if (book_a.isbn() == book_b.isbn()) {
		cout << book_a + book_b << endl;
		return 0;
	} else {
		cerr << "Data must refer to same ISBN"
			 << endl;
		return -1;
	}
#elif CASE == 2
	if (book_a.isbn() == book_c.isbn()) {
		cout << book_a + book_c << endl;
		return 0;
	} else {
		cerr << "Data must refer to same ISBN"
			 << endl;
		return -1;
	}
#endif
	return 0;
}