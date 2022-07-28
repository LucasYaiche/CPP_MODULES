#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap Ken("Ken", 100, 10, 30);
	ClapTrap Ryu("Ryu", 120, 10, 25);

	Ken.attack("Ryu");
	Ryu.takeDamage(Ken.getAD());
	Ryu.attack("Ken");
	Ken.takeDamage(Ryu.getAD());
	Ken.attack("Ryu");
	Ryu.takeDamage(Ken.getAD());
	Ken.attack("Ryu");
	Ryu.takeDamage(Ken.getAD());
	Ken.attack("Ryu");
	Ryu.takeDamage(Ken.getAD());
	Ken.attack("Ryu");
	Ryu.takeDamage(Ken.getAD());
	Ken.attack("Ryu");
	Ryu.takeDamage(Ken.getAD());
	Ken.attack("Ryu");
	Ryu.takeDamage(Ken.getAD());
	Ken.attack("Ryu");
	Ryu.takeDamage(Ken.getAD());
	Ken.attack("Ryu");
	Ryu.takeDamage(Ken.getAD());
	Ken.attack("Ryu");
	Ryu.takeDamage(Ken.getAD());
	Ken.attack("Ryu");
	Ryu.takeDamage(Ken.getAD());
}