#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{

	public:

		FragTrap();
		FragTrap(std::string name);
		FragTrap(std::string name, int HP, int EP, int DP);
		FragTrap( FragTrap const & src );
		~FragTrap();

		void			highFivesGuys(void);
		void			attack(const std::string & target);


		FragTrap &		operator=( FragTrap const & rhs );

	private:

};

#endif /* ******************************************************** FRAGTRAP_H */