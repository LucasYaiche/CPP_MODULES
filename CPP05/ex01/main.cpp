#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	Bureaucrat Bob("Bob", 63);
	Bureaucrat Sylvie("Sylvie", 24);
	Bureaucrat Chteve("Chteve", 1);
	Bureaucrat Pascale("Pascale", 150);
	
	std::cout << Bob;
	std::cout << Sylvie;
	
	std::cout << std::endl;

	Form N("N", 63, 63);
	Form O("O", 24, 24);
	Form E("E", 1, 1);
	Form D("D", 62, 62);

	std::cout << std::endl;

	std::cout << N;
	std::cout << O;
	std::cout << D;
	std::cout << E;
	
	std::cout << std::endl;

	Bob.signForm(D);
	Bob.signForm(E);

	std::cout << std::endl;
	
	Bob.increase();
	std::cout << Bob;

	std::cout << std::endl;
	
	Bob.signForm(D);
	Bob.signForm(E);
	std::cout << D;
	std::cout << E;
	
	std::cout << std::endl;

	std::cout << "Chteve : ";
	Chteve.increase();	
	std::cout << "Pascale : ";
	Pascale.decrease();

	return 0;
}