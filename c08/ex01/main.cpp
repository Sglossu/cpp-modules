#include "span.hpp"

int main()
{
	try {
		Span sp = Span(5);

		 sp.addNumber(1);
		 sp.addNumber(3);
		 sp.addNumber(17);
		 sp.addNumber(9);
		 sp.addNumber(11);


		std::cout << "shortest:	" << sp.shortestSpan() << std::endl;
		std::cout << "longest:	" << sp.longestSpan() << std::endl;
	} catch (std::exception &ex) {
		std::cout << ex.what() << std::endl;
	}

	std::cout << "____________________________________" << std::endl;
	{
		try
		{
			std::vector<int> tmp;
			for (int i = 0; i < 10000; ++i)
				tmp.push_back(i);

			Span sp = Span(10000);
			sp.addNumber(tmp.begin(), tmp.end() - 1);
			std::cout << "shortest:	" << sp.shortestSpan() << std::endl;
			std::cout << "longest:	" << sp.longestSpan() << std::endl;
		}
		catch (const std::exception &ex) {
			std::cout << ex.what() <<std::endl;
		}
	}
}
