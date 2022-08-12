#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void)
{
	Intern someRandomIntern;
	Form* rrf;
	Form* rra;

	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	rra = someRandomIntern.makeForm("not robotomy request", "Bender");

	std::cout << *rrf;
	delete rrf;
}