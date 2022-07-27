#include "Point.hpp"
#include "Fixed.hpp"

int main( void ) 
{	
	Point a(1, 1);
	Point b(1, 2);
	Point c(2, 2);
	Point point(2, 1);
	bsp(a, b, c, point);

	return 0;
}