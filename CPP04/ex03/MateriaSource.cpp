#include "MateriaSource.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

MateriaSource::MateriaSource()
{
	for(int i = 0; i < 4; i++)
		spell[i] = NULL;
}

MateriaSource::MateriaSource( const MateriaSource & src )
{
	for(int i = 0; i < 4; i++)
	{
		if ((src.spell)[i])
			(this->spell)[i] = (src.spell[i])->clone();
	}
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if(spell[i])
			delete spell[i];
	}
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

MateriaSource &				MateriaSource::operator=( MateriaSource const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, MateriaSource const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void MateriaSource::learnMateria(AMateria *src)
{
	int i = 0;

	while ((this->spell)[i] != 0 && i < 4)
		i++;
	(this->spell)[i] = src;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for(int i = 0; i < 4 && spell[i]; i++)
	{
		if(type == spell[i]->getType())
			return spell[i]->clone();
	}
	return 0;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */