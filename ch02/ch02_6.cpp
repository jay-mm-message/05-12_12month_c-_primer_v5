#include <iostream>
using namespace std;
#include "file_1.h"

int main() {
	cout << "echo" << endl;
 	for(int i = 0 ; i < buffSize ; i++) {
		cout << i << ' ';
	}
	cout << endl;
	return 0;
}