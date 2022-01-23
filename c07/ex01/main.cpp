#include <iostream>
#include "Iter.hpp"

template <typename T>
void print_arr(T a) {
	std::cout << a << " ";
}

int main() {
	int arr1[] = {1, 2, 3, 4, 5};
	std::string arr2[] = {"one", "two", "three", "four", "five"};
	iter(arr1, 5, print_arr);
	std::cout << std::endl;
	iter(arr2, 5, print_arr);
	std::cout << std::endl;
	return 0;
}
