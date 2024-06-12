#include <iostream>
#include <stdint.h>
#include <iomanip>
#include <string>


int main()
{
	std::string intro;
	std::cout << "Enter your string: ";
	std::cin >> intro;
	std::cout << intro<<"\n";
	std::cout << intro.length()<<"\n";
	std::cout << intro.front() << "\n";
	std::cout << intro.back() << "\n";

	return 0;
}