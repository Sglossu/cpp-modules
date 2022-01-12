#include <iostream>

int main() {
	std::string		a = "HI THIS IS BRAIN";
	std::string 	*ptr_a = &a;
	std::string 	&ref_a = a;

	std::cout << &a << std::endl;
	std::cout << ptr_a << std::endl;
	std::cout << &ref_a << std::endl;
	std::cout << *ptr_a << std::endl;
	std::cout << ref_a << std::endl;

	return 0;
}
