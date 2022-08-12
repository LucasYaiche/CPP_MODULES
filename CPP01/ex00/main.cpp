#include "Zombie.hpp"


int main(void)
{
    Zombie * Kenny = new Zombie("Kenny");
    Zombie * Cartman;

    Kenny->announce();
    delete Kenny;

    Cartman = newZombie("Cartman");
    Cartman->announce();
    delete Kenny;

    randomChump("Kyle");
	// system("leaks BraiiiiiiinnnzzzZ");
    return (0);
}