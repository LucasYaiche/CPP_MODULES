#include "ShrubberyCreationForm.hpp"
#include "Form.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137), _target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & src ) : _target(src._target)
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ShrubberyCreationForm &				ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs )
{
	(void) rhs;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	try
	{
		if (getSGrade() >= executor.getGrade() && getEGrade() >= executor.getGrade())
		{
			std::ofstream ofs(this->_target + "_shrubbery");
			ofs << TREE;
		}
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