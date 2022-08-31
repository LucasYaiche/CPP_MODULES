#include "Animal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Animal::Animal() : _type("Animal")
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(std::string type) : _type(type)
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal( const Animal & src ) : _type(src._type)
{
	std::cout << "Animal copy constructor called" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Animal::~Animal()
{
	std::cout << "Animal deststructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Animal &				Animal::operator=( Animal const & rhs )
{
	if(this != &rhs)
	{
		this->_type = rhs._type;
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	Animal::makeSound() const
{
	std::cout << _type << " made its signature sound" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string	Animal::getType() const
{
	return this->_type;
}

/* ************************************************************************** */