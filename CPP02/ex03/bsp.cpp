#include "Point.hpp"

float area(float ax, float ay, float bx, float by, float cx, float cy)
{
	float returned;

	returned = abs((ax * (by - cy) + bx * (cy - ay) + cx * (ay - by)) / 2.0);
	if (returned < 0)
		returned *= -1;
	return returned;
}

bool	check(const Point a, const Point b, const Point c, const Point point)
{
	float	ax, ay, bx, by, cx, cy, x, y;

	ax = a.getX().toFloat(); 
	ay = a.getY().toFloat();
	bx = b.getX().toFloat(); 
	by = b.getY().toFloat();
	cx = c.getX().toFloat(); 
	cy = c.getY().toFloat();
	x = point.getX().toFloat();
	y = point.getY().toFloat();

	float	A0 = area(ax, ay, bx, by, cx, cy);
	float	A1 = area(x, y, bx, by, cx, cy);
	float	A2 = area(ax, ay, x, y, cx, cy);
	float	A3 = area(ax, ay, bx, by, x, y);

	if (!A1 || !A2 || !A3)
		return false;

	return (A0 == A1 + A2 + A3);

}

bool	bsp(const Point a, const Point b, const Point c, const Point point)
{
	if (check(a, b, c, point))
	{
		std::cout << "The point is inside the triangle." << std::endl;
		return true;
	}
	std::cout << "The point is not inside the triangle." << std::endl;
	return false;
}
