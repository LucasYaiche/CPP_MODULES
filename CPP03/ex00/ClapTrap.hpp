#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{

	public:

		ClapTrap(std::string name);
		ClapTrap(std::string name, int HP, int EP, int AD);
		ClapTrap( ClapTrap const & src );
		~ClapTrap();

		int	getAD(void);
		int	getHP(void);
		
		void			attack(const std::string & target);
		void			takeDamage(int amount);
		void			beRepaired(int amount);


		ClapTrap &		operator=( ClapTrap const & rhs );

	protected:

		std::string	_name;
		int 		_HP;
		int 		_EP;
		int 		_AD;

};

std::ostream &			operator<<( std::ostream & o, ClapTrap const & i );

#endif /* ******************************************************** CLAPTRAP_H */