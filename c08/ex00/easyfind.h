#pragma once

#include <iostream>
#include <algorithm>
#include <vector>

template <typename T>
typename T::iterator easyfind(T& container, int nb) {
	std::vector<int>::iterator it; /* объявили итератор для чтения */
	it = std::find(container.begin(), container.end(), nb); /* ищем в списке число nb */
	if (it != container.end())
		return it;
	throw std::exception();
}