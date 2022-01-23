#include "span.hpp"

Span::Span(unsigned int n) : max_size(n) {
	array = new std::vector<int>;
}

Span::Span(const Span &other) {
	array = new std::vector<int>;
	max_size = other.max_size;
	for (int i = 0; i < static_cast<int>(other.max_size); ++i)
		array[i] = other.array[i];
}

const Span &Span::operator=(const Span &other) {
	if (this == & other)
		return (*this);
	delete array;
	array = new std::vector<int>;
	max_size = other.max_size;
	for (int i = 0; i < static_cast<int>(other.max_size); ++i)
		array[i] = other.array[i];
	return (*this);
}

Span::~Span() { delete array; }

int Span::shortestSpan() {
	int rez = INT_MAX;
	int diff;

	if (max_size < 2)
		throw SpanIsTooShort();

	for (int i = 0; i < static_cast<int>(array->size()) - 1; ++i) {
		diff = std::abs((*array)[i] - (*array)[i + 1]);
		if (diff < rez)
			rez = diff;
	}

	return (rez);
}

int Span::longestSpan() {
	if (max_size < 2)
		throw SpanIsTooShort();

	int a = *max_element(array->begin(), array->end());
	int b = *min_element(array->begin(), array->end());

	return a - b;
}

void Span::addNumber(int nb) {
	if (array->size() >= max_size)
		throw SpanIsFull();
	array->push_back(nb);
}

const char* Span::SpanIsFull::what() const throw() { return ("Span is already full"); }

const char* Span::SpanIsTooShort::what() const throw() { return ("Span is too short"); }