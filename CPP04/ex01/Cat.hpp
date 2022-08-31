#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{

	public:

		Cat();
		Cat( Cat const & src );
		virtual ~Cat();

		virtual void	makeSound() const;

		Brain	*getBrain() const;
		std::string	getIdea(int n);

		Cat &		operator=( Cat const & rhs );


	private:

		Brain*	_brain;

};

#endif /* ************************************************************* CAT_H */