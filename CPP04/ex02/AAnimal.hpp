#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>
# include "Brain.hpp"

class AAnimal
{

	public:

		AAnimal();
		AAnimal(std::string type);
		AAnimal( AAnimal const & src );
		virtual ~AAnimal() = 0;

		std::string getType() const;

		virtual Brain 		*getBrain() const = 0;
		virtual std::string	getIdea(int n) = 0;

		virtual void	makeSound() const = 0;

		AAnimal &		operator=( AAnimal const & rhs );

	protected:

		std::string _type;
	
	private:

};

#endif /* ********************************************************** ANIMAL_H */