#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <string>
# include "Form.hpp"

class RobotomyRequestForm : public Form
{

	public:

		RobotomyRequestForm(std::string target);
		RobotomyRequestForm( RobotomyRequestForm const & src );
		~RobotomyRequestForm();

		void	execute(Bureaucrat const & executor) const;

		RobotomyRequestForm &		operator=( RobotomyRequestForm const & rhs );

	private:

		const std::string	_target;

};

#endif /* ********************************************* ROBOTOMYREQUESTFORM_H */