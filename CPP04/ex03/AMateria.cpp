#include "AMateria.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AMateria::AMateria(std::string const & type) : type(type)
{
}

AMateria::AMateria( const AMateria & src ) : type(src.type)
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AMateria::~AMateria()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AMateria &				AMateria::operator=( AMateria const & rhs )
{
	if(this != &rhs)
		this->type = rhs.type;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string	const & AMateria::getType() const
{
	return this->type;
}

/* ************************************************************************** */