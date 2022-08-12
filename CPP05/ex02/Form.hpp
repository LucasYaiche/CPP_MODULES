#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form 
{

	public:
	
		class GradeTooHighException : public std::exception
		{
			public:

				virtual const char * what() const throw()
				{
					return ("The grade is too high");
				}
		};
		
		class GradeTooLowException : public std::exception
		{
			public:

				virtual const char * what() const throw()
				{
					return ("The grade is too low");
				}
		};
		
		class GradeIncorrect : public std::exception
		{
			public:

				virtual const char * what() const throw()
				{
					return ("The grade you try too set is not valid");
				}
		};

		Form();
		Form(std::string name, int sgrade, int egrade);
		Form( Form const & src );
		~Form();

		void			Besigned(Bureaucrat bureaucrat);
		virtual void	execute(Bureaucrat const & executor) const = 0;	

		const std::string	getName() const;
		bool				getSigned() const;
		int					getSGrade() const;
		int					getEGrade() const;

		Form &		operator=( Form const & rhs );

	private:

		const std::string	_name;
		bool				_signed;
		const int			_sgrade;
		const int			_egrade;			
};

std::ostream &			operator<<( std::ostream & o, Form const & i );

#endif /* ************************************************************ FORM_H */