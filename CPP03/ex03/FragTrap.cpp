#include "FragTrap.hpp"
#include "ClapTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

FragTrap::FragTrap() : ClapTrap("Default", 100, 100, 30)
{
	std::cout << "FragTrap default constructor called" << std::endl;

}

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30)
{
	std::cout << "FragTrap " << name << " constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name, int HP, int EP, int AD) : ClapTrap(name, HP, EP, AD)
{
	std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap( const FragTrap & src ) : ClapTrap(src)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

FragTrap &				FragTrap::operator=( FragTrap const & rhs )
{
	this->_name = rhs._name;
	this->_HP = rhs._HP;
	this->_EP = rhs._EP;
	this->_AD = rhs._AD;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, FragTrap const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


void			FragTrap::highFivesGuys(void)
{
	if (this->_EP > 0)
	{
		if (this->_HP > 0)
		{
			this->_EP--;
			std::cout << "FragTrap " << this->_name << " asks for a high five"<< std::endl; 
		}
		else 
			std::cout << "FragTrap " << this->_name << " cannot high five because they are dead" << std::endl;
	}
	else
		std::cout << "FragTrap " << this->_name << " is out of energy points" << std::endl;
}

void	FragTrap::attack(const std::string & target)
{
	if (this->_EP > 0)
	{
		if (this->_HP > 0)
		{
			this->_EP--;
			std::cout << "FragTrap " << this->_name << " attacks " << target << ", and inflicted " << _AD << " hit points" << std::endl;
		}
		else
			std::cout << "FragTrap " << this->_name << " cannot attack because they are dead. FeelsDeadMan" << std::endl;
	}
	else 
		std::cout << "FragTrap " << this->_name << " is out of energy points. Sadge" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */