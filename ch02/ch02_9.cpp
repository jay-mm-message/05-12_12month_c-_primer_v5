#include <iostream>
using namespace std;

typedef char *cstr;

int main() {
	char ch = 'B';
	const cstr alisa_ch = &ch;
	char *const p_ch = alisa_ch;
	
	cout << p_ch << endl;
	return 0;
}