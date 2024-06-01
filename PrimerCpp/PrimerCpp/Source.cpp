#include <cstdlib> // what is this
#include <iostream>
namespace source {
	int main() {
		short me = 0;
		std::cout << sizeof(short) << sizeof(int) << std::endl;
		int x = 0, y = 0;
		std::cout << "Please enter two numbers"; // output operator -> "<<"
		std::cin >> x >> y; // input operator -> ">>"

		int sum = x + y;
		std::cout << sum << std::endl;
		std::cout << "whats up" << std::endl;
		return 0;
	}
};