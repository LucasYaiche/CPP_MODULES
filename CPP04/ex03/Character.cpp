#include "Character.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Character::Character(const std::string& name) : name(name)
{
	for(int i = 0; i < 4; i++)
		inventory[i] = NULL;
}

Character::Character( const Character & src )
{
	for(int i = 0; i < 4; i++)
	{
		if ((src.inventory)[i])
			(this->inventory)[i] = (src.inventory[i])->clone();
	}
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if(inventory[i])
			delete inventory[i];
	}
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Character &				Character::operator=( Character const & rhs )
{

	for(int i = 0; i < 4; i++)
	{
		if (this->inventory[i])
			delete this->inventory[i];
		if (rhs.inventory[i])
			this->inventory[i] = (rhs.inventory[i])->clone();
	}
	name = rhs.name;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Character const & i )
{
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i] == NULL)
		{
			this->inventory[i] = m;
			return ;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
	{
		std::cout << "Index is either too big or too low." << std::endl;
		return ;
	}
	AMateria *ptr = this->inventory[idx];
	this->inventory[idx] = NULL;
	std::cout << this->name << "dropped" << *ptr << std::endl;
}

void Character::use(int idx, ICharacter& target)
{
	this->inventory[idx]->use(target);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string const & Character::getName() const
{
	return this->name;
}

/* ************************************************************************** */