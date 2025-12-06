#include <iostream>
#include "Sales_item.h"
using namespace std;

int main() {
	Sales_item book_a("0-201-b", 1, 20.00);
	Sales_item book_b("0-202-a", 1, 18.00);
	Sales_item book_c("0-203-c", 1, 25.00);
	Sales_item book_d("0-201-b", 1, 5.00);
	Sales_item book_e("0-202-a", 1, 15.00);

	Sales_item db[] = {book_a, book_b, book_c, book_d, book_e};
	string store_isdn[3] = {"0-202-a", "0-201-b", "0-203-c"};
	int store_isdn_cnt[3] = {0};
	for(int i = 0 ; i < sizeof(db)/ sizeof(Sales_item) ; ++i) {
		if (db[i].isbn() == store_isdn[0]) {
			store_isdn_cnt[0] += 1; 
		} else if (db[i].isbn() == store_isdn[1]) {
			store_isdn_cnt[1] += 1;
		} else if (db[i].isbn() == store_isdn[2]) {
			store_isdn_cnt[2] += 1;
		} else {
			;;
		}
	}

	for(int no = 0 ; no < 3 ; ++no) {
		cout << "store_isdn: " << store_isdn[no]
			 << ", store_cnt: " << store_isdn_cnt[no]
			 << endl;
	}
	cout << endl;

	return 0;
}