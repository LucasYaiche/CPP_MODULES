#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"

class Character : public ICharacter
{

	public:

		Character(const std::string& name);
		Character( Character const & src );
		~Character();

		std::string const & getName() const;
		void 				equip(AMateria* m);
		void 				unequip(int idx);
		void 				use(int idx, ICharacter& target);

		Character &		operator=( Character const & rhs );

	protected:
		AMateria * 		inventory[4];
		std::string		name;

	private:

};

#endif /* ******************************************************* CHARACTER_H */