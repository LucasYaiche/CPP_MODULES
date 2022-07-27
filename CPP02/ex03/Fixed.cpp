#include "Fixed.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Fixed::Fixed(void)
{
	this->_raw = 0;
}

Fixed::Fixed(const int n)
{
	this->_raw = n * 256;
}

Fixed::Fixed(const float n)
{
	this->_raw = int(roundf(n * 256));
}

Fixed::Fixed( const Fixed & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Fixed::~Fixed()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Fixed &				Fixed::operator=( const Fixed & rhs )
{
	if ( this != &rhs )
	{
		this->_raw = rhs.getRawBits();
	}
	return *this;
}


Fixed		Fixed::operator+( const Fixed & rhs )
{
	Fixed	n;

	n.setRawBits(this->_raw + rhs._raw);
	return n;
}

Fixed		Fixed::operator-( const Fixed & rhs )
{
	Fixed	n;

	n.setRawBits(this->_raw - rhs._raw);
	return n;
}

Fixed		Fixed::operator*( const Fixed & rhs )
{
	Fixed	n;

	n.setRawBits(this->_raw * rhs._raw / 256);
	return n;
}

Fixed		Fixed::operator/( const Fixed & rhs )
{
	Fixed	n;

	n.setRawBits((this->_raw * 256) / rhs._raw);
	return n;
}


bool		Fixed::operator>( const Fixed & rhs ) const
{
	return this->_raw > rhs._raw;
}

bool		Fixed::operator<( const Fixed & rhs ) const
{
	return this->_raw < rhs._raw;
}

bool		Fixed::operator>=( const Fixed & rhs ) const
{
	return this->_raw >= rhs._raw;
}

bool		Fixed::operator<=( const Fixed & rhs ) const
{
	return this->_raw <= rhs._raw;
}

bool		Fixed::operator==( const Fixed & rhs ) const
{
	return this->_raw == rhs._raw;
}

bool		Fixed::operator!=( const Fixed & rhs ) const
{
	return this->_raw != rhs._raw;
}


Fixed &		Fixed::operator++(void)
{
	this->_raw++;
	return(*this);
}

Fixed		Fixed::operator++(int)
{
	Fixed copy = *this;

	++*this;
	return(copy);
}

Fixed &		Fixed::operator--(void)
{
	this->_raw--;
	return(*this);
}

Fixed		Fixed::operator--(int)
{
	Fixed copy = *this;

	--*this;
	return(copy);
}

std::ostream &			operator<<( std::ostream & o, const Fixed & i )
{
	o << i.toFloat();
	return o;
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


/*
** --------------------------------- Functions --------------------------------
*/

	float	Fixed::toFloat(void) const
	{
		return this->_raw / 256.0;
	}

	int	Fixed::toInt(void) const
	{
		return this->_raw / 256;
	}

	Fixed &	Fixed::min(Fixed & n1, Fixed & n2)
	{
		if (n1 < n2)
			return n1;
		return n2;
	}

	const Fixed  &	Fixed::min(const Fixed & n1, const Fixed & n2)
	{
		if (n1 < n2)
			return n1;
		return n2;
	}

	Fixed &	Fixed::max(Fixed & n1, Fixed & n2)
	{
		if (n1 > n2)
			return n1;
		return n2;
	}

	const Fixed &	Fixed::max(const Fixed & n1, const Fixed & n2)
	{
		if (n1 > n2)
			return n1;
		return n2;
	}
