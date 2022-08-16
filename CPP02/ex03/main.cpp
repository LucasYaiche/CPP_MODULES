#include "Point.hpp"
#include "Fixed.hpp"

int main( void ) 
{	
	Point a(1, 1);
	Point b(1, 2);
	Point c(2, 2);
	Point point_one(2, 2);
	Point point_two(2, 1);
	Point point_three(1.3f, 1.5f);

	std::cout << "a : " << a;
	std::cout << "b : " << b;
	std::cout << "c : " << c << std::endl;

	std::cout << "point one : " << point_one;
	bsp(a, b, c, point_one);
	std::cout << "===========" << std::endl;
	std::cout << "point two : " << point_two;
	bsp(a, b, c, point_two);
	std::cout << "===========" << std::endl;
	std::cout << "point three : " << point_three;
	bsp(a, b, c, point_three);


	return 0;
}