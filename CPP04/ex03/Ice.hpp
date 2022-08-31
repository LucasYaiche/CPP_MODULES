#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include <string>
# include "Character.hpp"
# include "AMateria.hpp"

class Ice : public AMateria
{

	public:

		Ice();
		Ice( Ice const & src );
		~Ice();

		virtual AMateria*	clone() const;
		virtual  void		use(ICharacter& target);

		Ice &		operator=( Ice const & rhs );

	private:

};

#endif /* ************************************************************* ICE_H */