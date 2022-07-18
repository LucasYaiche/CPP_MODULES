#include "Weapon.hpp"

Weapon::Weapon(std::string weapon)
{
	this->_type = weapon;
	return;
}

Weapon::~Weapon()
{ 
	return;
}

/*=================*/ 
/*     Getters     */
/*=================*/

std::string const & Weapon::getType()
{
	return this->_type;
}

/*=================*/ 
/*     Setters     */
/*=================*/

void	Weapon::setType(std::string type)
{
	this->_type = type;
}
