#include "Span.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Span::Span(unsigned int N) : _size(N), _count(0), _vectorint(new std::vector<int>)
{
	if (_size <= 1)
		throw(InvalidSizeException());
}

Span::Span( const Span & src ) : _size(src._size), _count(src._count), _vectorint(new std::vector<int>)
{
	for (unsigned int i = 0; i < src._size; i++)
	{
		this->_vectorint[i] = src._vectorint[i];
	}
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Span::~Span()
{
	delete _vectorint;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Span &				Span::operator=( Span const & rhs )
{
	if ( this != &rhs )
	{
		this->_count = rhs._count;
		this->_vectorint = rhs._vectorint;
		for (unsigned int i = 0; i < rhs._size; i++)
		{
			this->_vectorint[i] = rhs._vectorint[i];
		}
	}
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	Span::addNumber(int nbr)
{
	if (this->_count + 1 > this->_size)
	{
		throw NotEnoughSpaceException();
	}
	else
	{
		this->_vectorint->push_back(nbr);
		this->_count++;
	}
}

void	Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{

	if (std::distance(begin, end) + this->_count > this->_size)
		throw NotEnoughSpaceException();
	else
	{
		this->_count += std::distance(begin, end);
		this->_vectorint->assign(begin, end);
	}
}

int		Span::longestSpan()
{
	return (*std::max_element(this->_vectorint->begin(), this->_vectorint->end()) - *std::min_element(this->_vectorint->begin(), this->_vectorint->end()));
}

int		Span::shortestSpan()
{
	int					shortest;
	std::vector<int>	copy(*this->_vectorint);

	if (this->_count <= 1)
		return 0;
	if (this->_count == 2)
		return (abs(copy[0] - copy[1]));
	std::sort(copy.begin(), copy.end());
		shortest = copy[1] - copy[0];
	for(unsigned int i = 0; i < this->_size - 1; i++)
	{
		if (copy[i + 1] - copy[i] < shortest)
			shortest = copy[i + 1] - copy[i];
	}
	return (shortest);

	
}



/*
** --------------------------------- ACCESSOR ---------------------------------
*/

int	Span::getVectorElement(int i)
{
	std::vector<int>	copy(*this->_vectorint);

	return copy[i];
}
int	Span::getCount()
{
	return this->_count;
}

/* ************************************************************************** */