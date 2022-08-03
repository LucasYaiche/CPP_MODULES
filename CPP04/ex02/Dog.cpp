#include "Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog() : AAnimal("Dog"), _brain(new Brain())
{
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog( const Dog & src ) : AAnimal(src)
{
	brain = new Brain(*(src.getBrain()));
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog::Dog( const AAnimal & src ) : AAnimal(src)
{
	brain = new Brain(*(src.getBrain()));
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
	this->_type = rhs._type;
	this->_brain = rhs._brain;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Dog const & i )
{
	//o << "Value = " << i.getValue();
	return o;
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