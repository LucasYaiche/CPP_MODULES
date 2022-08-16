#include "Fixed.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Fixed::Fixed(void) : _raw(0)
{
	std::cout << "Default constructor called" << std::endl;
	this->_raw = 0;
}

Fixed::Fixed( const Fixed & src )
{
	std::cout << "Copy constructor called" << std::endl;
	this->_raw = src._raw;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Fixed &				Fixed::operator=( Fixed const & rhs )
{
	std::cout << "Copy assignment operator called" << std::endl;
	if ( this != &rhs )
	{
		this->_raw = rhs._raw;
	}
	return *this;
}

/*
** --------------------------------- Functions --------------------------------
*/


/*
** --------------------------------- Getters/Setters --------------------------
*/

	int			Fixed::getRawBits(void) const
	{
		std::cout << "getRawBits member function called" << std::endl;
		return this->_raw;
	}

	void		Fixed::setRawBits(int const raw)
	{
		this->_raw = raw;
	}


/* ************************************************************************** */