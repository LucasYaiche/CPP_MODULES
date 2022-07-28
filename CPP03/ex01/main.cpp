#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap Ken("Ken", 100, 10, 30);
	ClapTrap Ryu("Ryu", 120, 10, 25);

	Ryu.attack("Ken");
	Ken.takeDamage(Ryu.getAD());
	Ken.attack("Ryu");
	Ryu.takeDamage(Ken.getAD());
	Ryu.attack("Ken");
	Ken.takeDamage(Ryu.getAD());
	Ryu.attack("Ken");
	Ken.takeDamage(Ryu.getAD());
	Ryu.attack("Ken");
	Ken.takeDamage(Ryu.getAD());
	Ken.guardGate();
}