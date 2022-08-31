#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat Bob("Bob", 63);
	Bureaucrat Sylvie("Sylvie", 24);
	Bureaucrat Chteve("Chteve", 1);
	Bureaucrat Pascale("Pascale", 150);
	Bureaucrat Nancy("Nancy", 0);
	Bureaucrat Pete("Pete", 151);

	std::cout << Bob;
	std::cout << Sylvie;

	Bob.increase();	 
	std::cout << Bob;
	Sylvie.decrease();
	std::cout << Sylvie;

	std::cout << "Chteve : ";
	Chteve.increase();	
	std::cout << "Pascale : ";
	Pascale.decrease();

	return 0;
}