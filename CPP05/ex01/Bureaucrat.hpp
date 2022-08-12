#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <stdexcept>
# include "Form.hpp"

class Form;

class Bureaucrat
{
	class GradeTooHighException : public std::exception
	{
		public:

			virtual const char * what() const throw()
			{
				return ("The grade you try too set is too high");
			}
	};
	
	class GradeTooLowException : public std::exception
	{
		public:

			virtual const char * what() const throw()
			{
				return ("The grade you try too set is too low");
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


	public:

		Bureaucrat(std::string name, int grade);
		Bureaucrat( Bureaucrat const & src );
		~Bureaucrat();

		Bureaucrat &		operator=( Bureaucrat const & rhs );

		const std::string&	getName() const;
		int					getGrade() const;

		void		increase();
		void		decrease();
		void		signForm(Form& form);

	private:

		std::string const	_name;
		int					_grade;
};

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i );

#endif /* ****************************************************** BUREAUCRAT_H */