#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal
{

	public:

		WrongAnimal();
		WrongAnimal(std::string type);
		WrongAnimal( WrongAnimal const & src );
		~WrongAnimal();

		std::string getType() const;

		void	makeSound() const;

		WrongAnimal &		operator=( WrongAnimal const & rhs );

	protected:

		std::string _type;

	private:

};

#endif /* ***************************************************** WRONGANIMAL_H */