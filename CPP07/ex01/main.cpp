#include "Iter.hpp"

void	myprint(const std::string & string)
{
	std::cout << string << std::endl;
}

int main(void)
{
	std::cout << "-----TESTS WITH STRINGS-----" << std::endl;
	std::string *book = new std::string[5];

	book[0] = "ratio";
	book[1] = "touch grass";
	book[2] = "no one asked";
	book[3] = "no *itches";
	book[4] = "L";
	iter(book, 5, myprint);
	delete[] book;

	std::cout << "-----PDF TESTS-----" << std::endl;
	int tab[] = { 0, 1, 2, 3, 4 };
	Awesome tab2[5];
	iter( tab, 5, print );
	iter( tab2, 5, print );


	// system("leaks Iter");
	return 0;
}