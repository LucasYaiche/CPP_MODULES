#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain
{

	public:

		Brain();
		Brain( Brain const & src );
		~Brain();

		std::string	getIdea(int n);
		void		setIdea(int n, std::string idea);

		Brain &		operator=( Brain const & rhs );

	private:

		std::string _ideas[100];
};

#endif /* *********************************************************** BRAIN_H */