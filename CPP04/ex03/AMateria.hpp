#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"

class AMateria
{

	public:

		AMateria(std::string const & type);
		AMateria( AMateria const & src );
		virtual ~AMateria();

		std::string const & getType() const;

		virtual AMateria* 	clone() const = 0;
		virtual  void		use(ICharacter& target) = 0;

		AMateria &		operator=( AMateria const & rhs );

	protected:

		std::string	type;

	private:

};

std::ostream &			operator<<( std::ostream & o, AMateria const & i );

#endif /* ******************************************************** AMATERIA_H */