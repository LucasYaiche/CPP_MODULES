#include "ClapTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ClapTrap::ClapTrap(std::string name) : _name(name), _HP(10), _EP(10), _AD(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}
ClapTrap::ClapTrap(std::string name, int HP, int EP, int AD) : _name(name), _HP(HP), _EP(EP), _AD(AD)
{
	std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap & src )
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ClapTrap &				ClapTrap::operator=( ClapTrap const & rhs )
{
	(void)rhs;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, ClapTrap const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/
void	ClapTrap::attack(const std::string & target)
{
	if (this->_EP > 0)
	{
		if (this->_HP > 0)
		{
			this->_EP--;
			std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << _AD << " hit points" << std::endl;
		}
		else
			std::cout << "Scavtrap " << this->_name << " cannot attack because they are dead" << std::endl;
	}
	else 
		std::cout << "Claptrap " << this->_name << " is out of energy points" << std::endl;
}

void	ClapTrap::takeDamage(int amount)
{
	if (amount < 0)
		std::cout << "ClapTrap Error with the argument for " << this->_name	<< ".takeDamage" << std::endl; 
	else if (this->_HP > 0)
	{
			this->_HP -= amount;
			std::cout << "ClapTrap " << this->_name << " is attacked and lost " << amount << " health point(s) and is now at " << this->_HP << std::endl;	
	}
	else
		std::cout << "Claptrap " << this->_name << " is at 0 health points. FeelsBadMan" << std::endl;

}

void	ClapTrap::beRepaired(int amount)
{
	if (amount < 0)
		std::cout << "ClapTrap Error with the argument for " << this->_name	<< ".beRepaired" << std::endl; 
	else if (this->_EP > 0)
	{
		if (this->_HP > 0)
		{
			this->_EP--;
			this->_HP += amount;
			std::cout << "ClapTrap " << this->_name << " have been healed and gained " << amount << " health point(s)" << std::endl;
		}
		else 
			std::cout << "Scavtrap " << this->_name << " cannot attack because they are dead" << std::endl;
	}
	else
		std::cout << "Claptrap " << this->_name << " is out of energy points" << std::endl;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

int ClapTrap::getHP(void)
{
	return this->_HP;
}

int ClapTrap::getAD(void)
{
	return this->_AD;
}

/* ************************************************************************** */