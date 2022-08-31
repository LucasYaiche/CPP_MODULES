#include "RobotomyRequestForm.hpp"
#include "Form.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45), _target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & src ) : _target(src._target)
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RobotomyRequestForm::~RobotomyRequestForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

RobotomyRequestForm &				RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs )
{
	(void) rhs;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	try
	{
		if (getSGrade() >= executor.getGrade() && getEGrade() >= executor.getGrade())
		{
			std::cout << "Brrrrrrrrrrrrrr...Brrrrrrrrrrrrrr...";
			int nb = rand() % 2;
			if (nb == 0)
				std::cout << this->_target <<" has been robotized successfully. FeelsGoodMan" << std::endl;
			else
				std::cout << "the surgery of " << this->_target <<" failed. FeelsBadMan" << std::endl;
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