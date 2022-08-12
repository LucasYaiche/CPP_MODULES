#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	ShrubberyCreationForm 	PaixVerte("Bob");
	RobotomyRequestForm 	V("test");
	PresidentialPardonForm 	Macron("test");
	Bureaucrat				Bob("Bob", 1);

	std::cout << Bob;
	
	PaixVerte.execute(Bob);
	V.execute(Bob);
	Macron.execute(Bob);
}