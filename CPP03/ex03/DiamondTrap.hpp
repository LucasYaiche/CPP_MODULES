#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <iostream>
# include <string>
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{

	public:

		DiamondTrap(std::string name);
		DiamondTrap(std::string name, int HP, int EP, int DP);
		DiamondTrap( DiamondTrap const & src );
		~DiamondTrap();

		void	WhoAmI();
		using	ScavTrap::attack;

		DiamondTrap &		operator=( DiamondTrap const & rhs );

	private:

		std::string	_name;

};

std::ostream &			operator<<( std::ostream & o, DiamondTrap const & i );

#endif /* ***************************************************** DIAMONDTRAP_H */