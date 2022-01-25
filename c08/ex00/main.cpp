#include "easyfind.h"

int main() {

	std::vector<int> vector;
	std::vector<int>::iterator v_it;
	// int nb = 100;
	int nb = 3;
	std::cout << "nb: " << nb << std::endl;
	for (int i = 2; i < 12; ++i)
		vector.push_back(i);
	for (v_it = vector.begin(); v_it != vector.end(); ++v_it)
		std::cout << *v_it << ' ';
	std::cout << std::endl;
	try {
		v_it = easyfind(vector, nb);
		std::cout << "easyfind: " << nb << std::endl;
	} catch (std::exception &ex) {
		std::cerr << "Not found"  << std::endl;
	}

	return 0;
}
