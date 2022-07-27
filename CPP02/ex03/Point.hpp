#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{

	public:

		Point(void);
		Point(const int x, const int y);
		Point(const float x, const float y);
		Point( Point const & src );
		~Point();

		const Fixed getX() const;
		const Fixed getY() const;

		Point &		operator=( Point const & rhs );

	private:

		const Fixed		_x;
		const Fixed		_y;
};

bool	bsp(const Point a, const Point b, const Point c, const Point point);
std::ostream &			operator<<( std::ostream & o, Point const & i );

#endif /* *********************************************************** POINT_H */

