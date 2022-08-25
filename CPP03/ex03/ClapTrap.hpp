#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{

	public:

		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(std::string name, int HP, int EP, int AD);
		ClapTrap( ClapTrap const & src );
		~ClapTrap();

		int			getAD(void);
		int			getHP(void);
		std::string	getName(void);
		
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

#endif /* ******************************************************** CLAPTRAP_H */