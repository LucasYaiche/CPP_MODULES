#include "Zombie.hpp"

/*=================*/ 
/*    Functions    */
/*=================*/

Zombie *	newZombie(std::string name)
{
	Zombie*	zombie = new Zombie(name);
	return zombie;
}