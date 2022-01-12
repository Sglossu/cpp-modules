#include <iostream>
#include "Zombie.hpp"

Zombie* newZombie( std::string name );
void 	randomChump( std::string name );

int main() {
	randomChump( "RANDOM" );
	delete newZombie( "NEW" );
	return 0;
}
