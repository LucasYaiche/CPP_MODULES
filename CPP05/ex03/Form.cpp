#include "Form.hpp"
#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form() : _name("Default"), _signed(false), _sgrade(150), _egrade(150)
{
}

Form::Form(std::string name, int sgrade, int egrade) : _name(name), _signed(false), _sgrade(sgrade), _egrade(egrade)
{
	try
	{
		if (sgrade < 1 || egrade < 1)
			throw GradeTooHighException();
	}
	catch (GradeTooHighException& e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		if (sgrade > 150 || egrade > 150)
			throw GradeTooLowException();
	}
	catch (GradeTooLowException& e)
	{
		std::cout << e.what() << std::endl;
	}
}

Form::Form( const Form & src ) : _name(src._name), _signed(src._signed), _sgrade(src._sgrade), _egrade(src._egrade)
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Form::~Form()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Form &				Form::operator=( Form const & rhs )
{
	this->_signed = rhs._signed;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Form const & i )
{
	o << "Form "<<i.getName() << ", ";
	if (i.getSigned())
		o << "signed,";
	else
		o << "not signed,";
	o << " requires grade " << i.getSGrade() << " to be signed and requires grade " << i.getEGrade()<< " to be executed." << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	Form::Besigned(Bureaucrat bureaucrat)
{
	try
	{
		if (bureaucrat.getGrade() <= this->_sgrade)
			this->_signed = true;
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

const std::string	Form::getName() const
{
	return this->_name;
}

bool	Form::getSigned() const
{
	return this->_signed;
}

int			Form::getSGrade() const
{
	return this->_sgrade;
}

int			Form::getEGrade() const
{
	return this->_egrade;
}

/* ************************************************************************** */