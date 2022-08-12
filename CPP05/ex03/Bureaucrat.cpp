#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	try
	{
		if (grade < 1 || grade > 150)
			throw GradeIncorrect();
	}
	
	catch (GradeIncorrect& e)
	{
		std::cout << e.what() << std::endl;
	}
}

Bureaucrat::Bureaucrat( const Bureaucrat & src ) : _name(src._name), _grade(src._grade)
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Bureaucrat::~Bureaucrat()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Bureaucrat &				Bureaucrat::operator=( Bureaucrat const & rhs )
{
	if (this != &rhs)
	{
		(std::string) this->_name = rhs._name;
		this->_grade = rhs._grade;
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i )
{
	o << i.getName() << ", bureaucrat grade " << i.getGrade() << "." << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	Bureaucrat::increase()
{
	try
	{
		if (this->_grade - 1 < 1)
			throw GradeTooHighException();
		else
			this->_grade--;
	}

	catch(GradeTooHighException& e)
	{
		std::cout << e.what() << std::endl;
	}
}

void	Bureaucrat::decrease()
{
	try
	{
		if (this->_grade + 1 > 150)
			throw GradeTooLowException();
		else
			this->_grade++;
	}

	catch(GradeTooLowException& e)
	{
		std::cout << e.what() << std::endl;
	}
}

void	Bureaucrat::signForm(Form& form)
{
	if (this->_grade <= form.getSGrade())
		std::cout << this->_name << " signed " << form.getName() << std::endl;
	else
	{
		std::cout << this->_name << " couldn't sign " << form.getName() << " because their grade is too low" << std::endl;
	}
}

void		Bureaucrat::executeForm(Form const & form) const
{
	if (this->_grade <= form.getEGrade())
		std::cout << this->_name << " executed " << form.getName() << std::endl;
	else
		std::cout << this->_name << " cannot execute " << form.getName() << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

const std::string&	Bureaucrat::getName() const
{
	return this->_name;
}

int			Bureaucrat::getGrade() const
{
	return this->_grade;
}

/* ************************************************************************** */