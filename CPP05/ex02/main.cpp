#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	std::srand(std::time(0));
	ShrubberyCreationForm 	PaixVerte("Moe");
	RobotomyRequestForm 	V("Anakin");
	PresidentialPardonForm 	Macron("Joker");
	Bureaucrat				Bob("Bob", 1);
	Bureaucrat				Larry("Larry", 150);

	std::cout << Bob;
	std::cout << std::endl << "-----------" << std::endl;
	PaixVerte.execute(Bob);
	Bob.executeForm(PaixVerte);
	std::cout << std::endl << "-----------" << std::endl;
	V.execute(Bob);
	Bob.executeForm(V);
	std::cout << std::endl << "-----------" << std::endl;
	Macron.execute(Bob);
	Bob.executeForm(Macron);

	std::cout << std::endl << "===========" << std::endl;

	std::cout << Larry;
	std::cout << std::endl << "-----------" << std::endl;
	PaixVerte.execute(Larry);
	Larry.executeForm(PaixVerte);
	std::cout << std::endl << "-----------" << std::endl;
	V.execute(Larry);
	Larry.executeForm(V);
	std::cout << std::endl << "-----------" << std::endl;
	Macron.execute(Larry);
	Larry.executeForm(Macron);

}