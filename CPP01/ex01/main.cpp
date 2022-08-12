#include "Zombie.hpp"


int main(void)
{
    int n = 10;
    Zombie * Horde = zombieHorde(n, "Zombie");

    for (int i = 0; i < n; i++)
    {
        Horde[i].announce();
    }
    delete [] Horde;
	// system("leaks BraiiiiiiinnnzzzZ");
    return (0);
}