#include "FragTrap.hpp"

int main(void)
{
	FragTrap Ken("Ken", 100, 10, 30);
	ClapTrap Ryu("Ryu", 120, 10, 25);

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