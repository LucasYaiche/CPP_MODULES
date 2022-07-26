#include "Fixed.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->_raw = 0;
}

Fixed::Fixed(const int n)
{
	std::cout << "Int constructor called" << std::endl;
	this->_raw = n * 256;
}

Fixed::Fixed(const float n)
{
	std::cout << "Float constructor called" << std::endl;
	this->_raw = int(roundf(n * 256));
}

Fixed::Fixed( const Fixed & src )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Fixed::~Fixed()
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
		this->_raw = rhs.getRawBits();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Fixed const & i )
{
	o << i.toFloat();
	return o;
}


/*
** --------------------------------- Functions --------------------------------
*/

	float	Fixed::toFloat(void) const
	{
		return this->_raw / 256.0;
	}

	int	Fixed::toInt(void) const
	{
		return this->_raw /256;
	}

/*
** --------------------------------- Getters/Setters --------------------------
*/

	int			Fixed::getRawBits(void) const
	{
		return this->_raw;
	}

	void		Fixed::setRawBits(int const raw)
	{
		this->_raw = raw;
	}


/* ************************************************************************** */