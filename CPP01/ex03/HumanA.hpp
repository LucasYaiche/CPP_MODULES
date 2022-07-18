#include "Weapon.hpp"
#include <string>

class HumanA
{
	public : 
		HumanA(std::string name, std::string weapon);
		~HumanA();
		
		void	attack();
	
	private :
		std::string	_name;
		Weapon&		_weapon;
};