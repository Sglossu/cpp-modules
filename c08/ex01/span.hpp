#pragma once
#include <iostream>
#include <vector>
#include <cmath>

class Span {
	unsigned int 		max_size;
	std::vector<int>	*array;
public:
	Span(unsigned int n);
	Span(const Span &other);
	Span const &operator=(const Span &other);
	~Span();

	void	addNumber(int nb);
	int		shortestSpan();
	int		longestSpan();

	class SpanIsFull : public std::exception { virtual const char* what() const throw(); };
	class SpanIsTooShort : public std::exception { virtual const char* what() const throw(); };

};
