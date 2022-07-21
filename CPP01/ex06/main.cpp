#include "Harl.hpp"

int main(int argc, char **argv)
{
	class Harl harl;
	
	if (argc != 2)
		std::cout << "Argument error." << std::endl;
	else
		harl.complain(argv[1]);
	return (0);
}