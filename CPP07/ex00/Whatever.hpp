#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>
# include <string>

template<typename T>
void	swap(T & x, T & y)
{
	T temp = x;
	x = y;
	y = temp;
}

template<typename T>
T		min(T & x, T & y)
{
	if (x == y)
		return y;
	else
		return std::min(x, y);
}

template<typename T>
T		max(T & x, T & y)
{
	if (x == y)
		return y;
	else
		return std::max(x, y);
}
		

#endif /* ******************************************************** WHATEVER_H */