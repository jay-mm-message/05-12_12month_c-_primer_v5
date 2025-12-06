#include <iostream>
#include "Sales_item.h"
using namespace std;

int main() {
	Sales_item book_a("0-201-78345-x", 2, 20.00);
	Sales_item book_b("0-201-78345-x", 2, 18.00);
	Sales_item book_c("0-201-78345-x", 2, 25.00);
	Sales_item book_d("0-201-78345-x", 2, 5.00);
	Sales_item book_e("0-201-78345-x", 2, 15.00);

	Sales_item sum;
	sum += book_a;
	sum += book_b;
	sum += book_c;
	sum += book_d;
	sum += book_e;

	cout << "table: \tcount, \tsum, \tavg" << endl;
	cout << "sum: \t" << sum << endl;
	return 0;
}