#include "Intern.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Intern::Intern()
{
}

Intern::Intern( const Intern & src )
{
	(void) src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Intern::~Intern()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Intern &				Intern::operator=( Intern const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	(void) rhs;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Intern const & i )
{
	//o << "Value = " << i.getValue();
	(void) i;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

Form*	Intern::makeForm(std::string form, std::string target)
{
	std::string	forms[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	Form		*types[3] = {new ShrubberyCreationForm(target), new RobotomyRequestForm(target), new PresidentialPardonForm(target)};
	
	try
	{
		for (int i = 0; i < 3; i++)
		{
			if (forms[i] == form)
			{
				std::cout << "Intern created " << form << std::endl;
				return types[i];	
			}
		}
		throw WrongNameException();
	}

	catch(WrongNameException& e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */