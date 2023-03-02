#include "Zombie.hpp"

void Zombie::announce( void ) {
	std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}

void Zombie::setName( std::string n ) {
	name = n;
}

Zombie::~Zombie() {
	std::cout << name <<" destroyed\n";
}
