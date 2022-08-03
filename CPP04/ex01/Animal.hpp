#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>
# include "Brain.hpp"

class Animal
{

	public:

		Animal();
		Animal(std::string type);
		Animal( Animal const & src );
		virtual ~Animal();

		std::string getType() const;

		virtual Brain 		*getBrain() const = 0;
		virtual std::string	getIdea(int n) = 0;

		virtual void	makeSound() const;

		Animal &		operator=( Animal const & rhs );

	protected:

		std::string _type;
	
	private:

};

std::ostream &			operator<<( std::ostream & o, Animal const & i );

#endif /* ********************************************************** ANIMAL_H */