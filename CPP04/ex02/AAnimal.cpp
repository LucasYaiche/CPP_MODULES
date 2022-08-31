#include "AAnimal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AAnimal::AAnimal()
{
	this->_type = "AAnimal";
	std::cout << "AAnimal default constructor called" << std::endl;
}

AAnimal::AAnimal(std::string type)
{
	this->_type = type;
	std::cout << "AAnimal default constructor called" << std::endl;
}

AAnimal::AAnimal( const AAnimal & src ) : _type(src._type)
{
	std::cout << "AAnimal copy constructor called" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AAnimal::~AAnimal()
{
	std::cout << "AAnimal deststructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AAnimal &				AAnimal::operator=( AAnimal const & rhs )
{
	this->_type = rhs._type;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	AAnimal::makeSound() const
{
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string	AAnimal::getType() const
{
	return this->_type;
}

/* ************************************************************************** */