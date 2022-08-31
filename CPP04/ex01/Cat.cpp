#include "Cat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat() : Animal("Cat"), _brain(new Brain())
{
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat( const Cat & src ) : Animal(src), _brain(new Brain(*(src._brain)))
{
	std::cout << "Cat copy constructor called" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cat::~Cat()
{	
	delete this->_brain;
	std::cout << "Cat destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cat &				Cat::operator=( Cat const & rhs )
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

void	Cat::makeSound() const
{
	std::cout << "Cat is meowing" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

Brain*	Cat::getBrain() const
{
	return this->_brain;
}

std::string	Cat::getIdea(int n)
{
	return this->getBrain()->getIdea(n);
}

/* ************************************************************************** */