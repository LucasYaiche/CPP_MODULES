#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->_name = name;
	return ;
}

Zombie::Zombie()
{

}

Zombie::~Zombie()
{ 
	std::cout << this->_name << " is gone." << std::endl;
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
/*     Setters     */
/*=================*/

void	Zombie::setName(std::string name)
{
	this->_name = name;
}

/*=================*/ 
/*    Functions    */
/*=================*/

void	Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}