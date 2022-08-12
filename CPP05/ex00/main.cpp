#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat Bob("Bob", 63);
	Bureaucrat Sylvie("Sylvie", 24);
	Bureaucrat Cheteve("Chteve", 1);
	Bureaucrat Pascale("Pascale", 150);

	std::cout << Bob;
	std::cout << Sylvie;

	

	std::cout << "Cheteve : ";
	Cheteve.increase();	
	std::cout << "Pascale : ";
	Pascale.decrease();

	return 0;
}