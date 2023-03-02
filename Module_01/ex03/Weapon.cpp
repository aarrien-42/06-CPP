#include "Weapon.hpp"

Weapon::Weapon( std::string t ) {
	setType(t);
}

std::string const &Weapon::getType(){
	return type;
}

void Weapon::setType( std::string newType ) {
	this->type = newType;
}