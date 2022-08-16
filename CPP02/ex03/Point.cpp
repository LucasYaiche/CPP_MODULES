#include "Point.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Point::Point(void) : _x(0), _y(0)
{
}

Point::Point(const int x, const int y) : _x(x), _y(y)
{
}

Point::Point(const float x, const float y) : _x(x), _y(y)
{
}

Point::Point( const Point & src ) : _x(src._x), _y(src._y)
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Point::~Point()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Point &				Point::operator=( Point const & rhs )
{
	(void)rhs;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Point const & i )
{
	o << "x = " << i.getX() << " | y = " << i.getY() << std::endl;
	return o;
}
/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

const Fixed Point::getX(void) const
{
	return this->_x;
}

const Fixed Point::getY(void) const
{
	return this->_y;
}


/* ************************************************************************** */