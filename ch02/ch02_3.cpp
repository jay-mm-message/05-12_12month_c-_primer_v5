#include <iostream>
using namespace std;

int main() {
	int units_sold_1 = 10;
	int units_sold_2{10};
	int units_sold_3 = {10};
	int units_sold_4(10);

	cout << "units_sold_1: " << units_sold_1 << endl;
	cout << "units_sold_2: " << units_sold_2 << endl;
	cout << "units_sold_3: " << units_sold_3 << endl;
	cout << "units_sold_4: " << units_sold_4 << endl;
	return 0;
}