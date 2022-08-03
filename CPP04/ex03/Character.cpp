#include "Character.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Character::Character(std::string name)
{

}

Character::Character( const Character & src )
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Character::~Character()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Character &				Character::operator=( Character const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Character const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void equip(AMateria* m)
{
	for (int i = 0, i < 4, i++)
	{
		if (this->inventory[i] == NULL)
		{
			this->inventory[i] = m;
			return 0;
		}
	}
}

void unequip(int idx);
{
	this->inventory[idx] = NULL;
}

void use(int idx, ICharacter& target);
{
	std::cout << "*shoots and ice bolt at " << target.getName() << " *" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string const & getName() const
{
	return this->name;
}

/* ************************************************************************** */