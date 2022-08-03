#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include <string>
# include "Character"

class Ice : public AMateria
{

	public:

		Ice(std::string const & type);
		Ice( Ice const & src );
		~Ice();

		AMateria*	clone() const;

		Ice &		operator=( Ice const & rhs );

	private:

};

std::ostream &			operator<<( std::ostream & o, Ice const & i );

#endif /* ************************************************************* ICE_H */