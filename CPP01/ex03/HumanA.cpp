#include "HumanA.hpp"

HumanA::HumanA(std::string name, std::string weapon)
{
	this->_name = name;
	this->_weapon.setType(weapon);
	return;
}

HumanA::~HumanA()
{ 
	return;
}

void	HumanA::attack()
{
	std::cout <<  _name << " attacks with their " << this->_weapon.getType() << std::endl;
}