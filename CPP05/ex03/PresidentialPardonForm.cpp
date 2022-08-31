#include "PresidentialPardonForm.hpp"
#include "Form.hpp"


/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5), _target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & src ) : _target(src._target)
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PresidentialPardonForm::~PresidentialPardonForm() 
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

PresidentialPardonForm &				PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs )
{
	(void) rhs;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	try
	{
		if (getSGrade() >= executor.getGrade() && getEGrade() >= executor.getGrade())
			std::cout << this->_target << " has been forgiven by Zaphod Beeblebrox" << std::endl;
		else
			throw GradeTooLowException();
	}
	catch(GradeTooLowException& e)
	{
		std::cout << e.what() << std::endl;
	}
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */