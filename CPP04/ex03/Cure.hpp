#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include <string>
# include "Character.hpp"
# include "AMateria.hpp"

class Cure : public AMateria
{

	public:

		Cure();
		Cure( Cure const & src );
		~Cure();

		AMateria*		clone() const;
		virtual void	use(ICharacter& target);

		Cure &		operator=( Cure const & rhs );

	private:

};

std::ostream &			operator<<( std::ostream & o, Cure const & i );

#endif /* ************************************************************ CURE_H */