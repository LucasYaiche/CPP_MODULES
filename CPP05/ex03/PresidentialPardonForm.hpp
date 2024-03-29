#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include <string>
# include "Form.hpp"

class PresidentialPardonForm : public Form
{
	public:

		PresidentialPardonForm(std::string target);
		PresidentialPardonForm( PresidentialPardonForm const & src );
		~PresidentialPardonForm();

		void	execute(Bureaucrat const & executor) const;

		PresidentialPardonForm &		operator=( PresidentialPardonForm const & rhs );

	private:

		const std::string	_target;
};

#endif /* ****************************************** PRESIDENTIALPARDONFORM_H */