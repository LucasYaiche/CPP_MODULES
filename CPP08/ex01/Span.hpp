#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <vector>
# include <iterator>
# include <algorithm>

class	NotEnoughSpaceException : public std::exception
{
	public:
		const char* what() const throw()
		{
			return "Not Enough space";
		}
};

class	InvalidSizeException : public std::exception
{
	public:
		const char* what() const throw()
		{
			return "The size is invalid";
		}
};

class Span
{

	public:

		Span(unsigned int N);
		Span( Span const & src );
		~Span();

		int	getVectorElement(int i);
		int	getCount();

		void	addNumber(int nbr);
		void	addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		int		longestSpan();
		int		shortestSpan();

		Span &		operator=( Span const & rhs );

	private:

		const unsigned	int		_size;
		unsigned	int			_count;
		std::vector<int>		*_vectorint;
};

#endif /* ************************************************************ SPAN_H */