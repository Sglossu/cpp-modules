#include <iostream>
#include "Karen.hpp"

int main(int argc, char **argv) {
	if (argc == 2) {
		Karen karen;
		karen.complain(argv[1]);
	}
	else
		std::cout << "Wrong arguments";
//	karen.complain("debug");
//	karen.complain("info");
//	karen.complain("warning");
//	karen.complain("error");
	return 0;
}
