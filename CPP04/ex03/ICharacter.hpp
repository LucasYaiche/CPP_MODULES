#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include <iostream>
# include <string>

class ICharacter
{

	public:

		ICharacter(std::string name);
		ICharacter( ICharacter const & src );
		virtual ~ICharacter();

		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
		
		virtual std::string const & getName() const = 0;

		ICharacter &		operator=( ICharacter const & rhs );

	private:

};

std::ostream &			operator<<( std::ostream & o, ICharacter const & i );

#endif /* ****************************************************** ICHARACTER_H */