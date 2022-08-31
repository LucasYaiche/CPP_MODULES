#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal
{

	public:

		Dog();
		Dog( Dog const & src );
		virtual ~Dog();

		virtual void	makeSound() const;

		Brain		*getBrain() const;
		std::string	getIdea(int n);

		Dog &		operator=( Dog const & rhs );

	private:

		Brain*	_brain;

};

#endif /* ************************************************************* DOG_H */