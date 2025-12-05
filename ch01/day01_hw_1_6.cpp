#include <iostream>


int main() {
	//std::cout << "Please provide two numbers: ";
	int v1 = 2, v2 = 6;

	//std::cin >> v1 >> v2;
	int sum = v1 + v2;

	std::cout << "The sum of " << v1;
	std::cout << " and " << v2;
	std::cout << " is " << v1 + v2 << std::endl;

	std::cout << "The sum of " << v1
			<< " and " << v2
			<< " is " << v1 + v2 << std::endl;
	return 0;
}