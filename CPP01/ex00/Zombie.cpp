#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->_name = name;
	this->announce();
	return ;
}

Zombie::~Zombie()
{ 
	std::cout << _name << " the zombie is gone." << std::endl;
	return;
}

/*=================*/ 
/*     Getters     */
/*=================*/

std::string Zombie::getName()
{
	return this->_name;
}

/*=================*/ 
/*    Functions    */
/*=================*/

void	Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}