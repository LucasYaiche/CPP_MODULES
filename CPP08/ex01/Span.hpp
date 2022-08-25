#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>

class Span
{

	public:

		Span(unsigned N);
		Span( Span const & src );
		~Span();

		void	addNumber();

		Span &		operator=( Span const & rhs );

	private:

};

std::ostream &			operator<<( std::ostream & o, Span const & i );

#endif /* ************************************************************ SPAN_H */