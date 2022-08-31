#include "Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog() : AAnimal("Dog"), _brain(new Brain())
{
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog( const Dog & src ) : AAnimal(src), _brain(new Brain(*(src._brain)))
{
	std::cout << "Dog copy constructor called" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog()
{
	delete this->_brain;
	std::cout << "Dog destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Dog &				Dog::operator=( Dog const & rhs )
{
	if (this != &rhs)
	{
		this->_type = rhs._type;
		this->_brain =new Brain(*rhs.getBrain());

	}
	return *this;
}




/*
** --------------------------------- METHODS ----------------------------------
*/

void	Dog::makeSound() const
{
	std::cout << "Dog is barking" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

Brain*	Dog::getBrain() const
{
	return this->_brain;
}

std::string	Dog::getIdea(int n)
{
	return this->getBrain()->getIdea(n);
}

/* ************************************************************************** */