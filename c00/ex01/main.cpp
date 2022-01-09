#include "phonebook.hpp"


int main()
{
	std::cout << "This is a phonebook. Please, write one of the commands: ADD, SEARCH or EXIT.\n";
	std::string	rez;
	std::cin >>	rez;
	if (std::cin.eof())
		exit(0);
	std::cin.clear();

	User	book[8];
	int 	i = 0;

	while (true) { //todo for
		if (rez == "ADD")
			ft_add(book, &i);
		else if (rez == "SEARCH")
			ft_search(book, i);
		else if (rez == "EXIT")
			exit(0);
		else {
			std::cout << "Only ADD, SEARCH and EXIT: ";
			std::cin >>	rez;
			if (std::cin.eof())
				exit(0);
			std::cin.clear();
			continue ;
		}
		std::cout << "What else? (ADD, SEARCH, EXIT): ";
		std::cin >>	rez;
		if (std::cin.eof())
			exit(0);
		std::cin.clear();
	}
	return 0;
}