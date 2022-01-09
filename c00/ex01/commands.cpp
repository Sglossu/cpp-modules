#include "phonebook.hpp"

void ft_add(User *book, int *i)
{
	User	t;
	int 	j = *i;

	std::cout << "Enter your first name: ";
	std::string str;
	std::cin >>	str;
	t.setFirstName(str);

	std::cout << "Enter your last name: ";
	std::cin >>	str;
	t.setLastName(str);

	std::cout << "Enter your nickname: ";
	std::cin >>	str;
	t.setNickName(str);

	std::cout << "Enter your number: ";
	int 	number;
	std::cin >>	str;
	number = ft_strisalpha(str);
	t.setNumber(number);

	std::cout << "Enter your darkest secret: ";
	std::cin >>	str;
	t.setSecret(str);

	book[j % 8] = t;

	if (*i < 8)
		(*i)++;
}

void ft_search(User *book, int len)
{
	if (len == 0) {
		std::cout << "No contact\n";
		return ;
	}
	std::cout << "-----------" << "-----------" << "-----------" << "-----------\n"
	<< "|     index|" << "first name|" << " last name|" << "  nickname|\n"
	<< "-----------" << "-----------" << "-----------" << "-----------\n";
	for (int i = 0; i < len; ++i)
	{
		std::cout << "|" << std::setw(10) << i + 1 << "|";
		if (book[i].getFirstName().length() <= 10)
			std::cout << std::setw(10) << book[i].getFirstName();
		else {
			std::cout.write(book[i].getFirstName().c_str(), 9);
			std::cout << ".";
		}
		std::cout << "|";
		if (book[i].getLastName().length() <= 10)
			std::cout << std::setw(10) << book[i].getLastName();
		else {
			std::cout.write(book[i].getLastName().c_str(), 9);
			std::cout << ".";
		}
		std::cout << "|";
		if (book[i].getNickName().length() <= 10)
			std::cout << std::setw(10) << book[i].getNickName();
		else {
			std::cout.write(book[i].getNickName().c_str(), 9);
			std::cout << ".";
		}
		std::cout << "|\n--------------------------------------------" << std::endl;
	}

	std::cout << "Please, put the contact's index number you whanted to check the info\n";
	int 		id;
	std::string str;
	std::cin >> str;
	if (std::cin.eof())
		exit(0);
	std::cin.clear();
	id = ft_strisalpha(str);
	while (id - 1 < 0 || id - 1 >= len) {
		std::cout << "Nonono, only index number!\n";
		std::cin >> str;
		id = ft_strisalpha(str);
	}
	std::cout << "First name:      " << book[id - 1].getFirstName() << std::endl;
	std::cout << "Last name:       " << book[id - 1].getLastName() << std::endl;
	std::cout << "Nick name:       " << book[id - 1].getNickName() << std::endl;
	std::cout << "Phone number:    " << book[id - 1].getNumber() << std::endl;
	std::cout << "Darkest secret:  " << book[id - 1].getSecret() << std::endl;
}

int	ft_strisalpha(std::string str)
{
	int	i;
	int number;

	i = 0;
	while (str[i])
	{
		if (std::cin.eof())
			exit(0);
		if (std::isalpha(str[i]))
		{
			std::cout << "Only digit in number! Enter number: ";
			std::cin.clear();
			std::cin >>	str;
			i = 0;
			continue ;
		}
		i++;
	}
	number = std::stoi(str);
	return (number);
}
