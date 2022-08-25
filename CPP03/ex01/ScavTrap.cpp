#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ScavTrap::ScavTrap() : ClapTrap("Default", 100, 50, 20)
{
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20)
{
	std::cout << "ScavTrap " << name << " constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name, int HP, int EP, int AD) : ClapTrap(name, HP, EP, AD)
{
	std::cout << "ScavTrap " << name << " constructor called" << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap & src ) : ClapTrap(src)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ScavTrap &				ScavTrap::operator=( ScavTrap const & rhs )
{
	this->_name = rhs._name;
	this->_HP = rhs._HP;
	this->_EP = rhs._EP;
	this->_AD = rhs._AD;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	ScavTrap::guardGate()
{
	if (this->_EP > 0)
	{
		if (this->_HP > 0)
		{
			this->_EP--;
			std::cout << "ScavTrap " << this->_name << " goes into Gate keeper mod"<< std::endl; 
		}
		else 
			std::cout << "Scavtrap " << this->_name << " cannot activate Gate keeper because they are dead" << std::endl;
	}
	else
		std::cout << "ScavTrap " << this->_name << " is out of energy points" << std::endl;
}

void	ScavTrap::attack(const std::string & target)
{
	if (this->_EP > 0)
	{
		if (this->_HP > 0)
		{
			this->_EP--;
			std::cout << "ScavTrap " << this->_name << " attacks " << target << ", and inflicted " << _AD << " hit points" << std::endl;
		}
		else
			std::cout << "Scavtrap " << this->_name << " cannot attack because they are dead. FeelsDeadMan" << std::endl;
	}
	else 
		std::cout << "ScavTrap " << this->_name << " is out of energy points. Sadge" << std::endl;
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */