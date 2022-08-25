#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <string>

template<typename T>
void	iter(T *ptr, int size, void (*f)(const T&))
{
	for(int i = 0; i < size; i++)
	{
		(*f)(ptr[i]);
	}
}

class Awesome
{
	public:

		Awesome( void ) : _n( 42 ) { return; }
		int get( void ) const { return this->_n; }
	private:

		int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

template< typename T >
void print( T const & x ) { std::cout << x << std::endl; return; }

#endif /* ************************************************************ ITER_H */