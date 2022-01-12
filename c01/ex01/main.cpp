#include <iostream>
#include <cstdlib>
#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int main(int argc, char **argv) {
	int i;

	if (argc == 2)
	{
		i = std::atoi(argv[1]);
		if (i <= 0) {
			std::cout << "Wrong arguments\n";
			return (1);
		}
		Zombie *zombie = zombieHorde(i, "Zombie" );
		for (int j = 0; j < i; ++j)
			zombie[j].announce();
		delete[] zombie;
	}
	else
		std::cout << "Wrong arguments\n";
	return 0;
}
