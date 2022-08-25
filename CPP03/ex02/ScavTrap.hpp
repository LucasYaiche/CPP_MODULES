#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{

	public:

		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(std::string name, int HP, int EP, int DP);
		ScavTrap( ScavTrap const & src );
		~ScavTrap();

		void	guardGate();
		void	attack(const std::string & target);

		ScavTrap &		operator=( ScavTrap const & rhs );

	private:

};

#endif /* ******************************************************** SCAVTRAP_H */