#include "DiamondTrap.hpp"

int main(void)
{
	FragTrap Ken("Ken", 100, 10, 30);
	DiamondTrap Ryu("Ryu", 120, 10, 25);

	Ryu.WhoAmI();
	std::cout << "Ryu's hp : " << Ryu.getHP() << std::endl;
	Ryu.beRepaired(30);
	std::cout << "Ryu's hp : " << Ryu.getHP() << std::endl;
	Ryu.attack("Ken");
	Ken.takeDamage(Ryu.getAD());
	Ken.attack("Ryu");
	Ryu.takeDamage(Ken.getAD());
	Ken.highFivesGuys();
	Ryu.attack("Ken");
	Ken.takeDamage(Ryu.getAD());
	Ryu.attack("Ken");
	Ken.takeDamage(Ryu.getAD());
	Ryu.attack("Ken");
	Ken.takeDamage(Ryu.getAD());
	Ken.highFivesGuys();
}