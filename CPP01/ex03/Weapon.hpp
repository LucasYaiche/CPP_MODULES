#include <string>
#include <iostream>

class Weapon
{
	public :
		Weapon(std::string weapon);
		~Weapon();

		std::string const &	getType();
		void				setType(std::string type);

	private :
		std::string _type;
};