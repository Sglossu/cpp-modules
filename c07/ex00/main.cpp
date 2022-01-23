#include <iostream>
#include "whatever.hpp"

int main() {
	int a = 2;
	int b = 3;

	std::cout << "BEFORE SWAP: a = " << a << ", b = " << b << std::endl;
	swap( a, b );
	std::cout << "AFTER SWAP:  a = " << a << ", b = " << b << std::endl;

	std::cout << "min( a, b ) = " << min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << max( a, b ) << std::endl;
	std::cout << "_______________________________" << std::endl;

	std::string c = "Hiiiiy";
	std::string d = "Hiiiib";

	std::cout << "BEFORE SWAP: c = " << c << ", d = " << d << std::endl;
	swap(c, d);
	std::cout << "AFTER SWAP:  c = " << c << ", d = " << d << std::endl;

	std::cout << "min( c, d ) = " << min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << max( c, d ) << std::endl;
	return 0;
}
