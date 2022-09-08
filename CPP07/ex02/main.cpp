#include "Array.hpp"

int main(void)
{
	Array<int>	empty;
	Array<int>	filled(5);


	for (int i = 0; i < filled.size(); i++)
			filled[i] = i;
	
	std::cout << "-----TESTS WITH EMPTY ARRAY AND WRONG INDEX-----" << std::endl;
	std::cout << "Empty :";
	empty[0] = 5;
	std::cout << std::endl;
	std::cout << "Wrong :";
	filled[5] = 5;
	std::cout << std::endl << std::endl;

	std::cout << "-----TESTS WITH FILLED ARRAY-----" << std::endl;
	for (int i = 0; i < filled.size(); i++)
	{
		std::cout << filled[i] << std::endl;
	}
	std::cout << std::endl << std::endl; 

	std::cout << "-----TESTS WITH STRINGS-----" << std::endl;
	Array<std::string>	words(3);

	words[0] = "I";
	words[1] = "am";
	words[2] = "gay";
	for (int i = 0; i < words.size(); i++)
	{
		std::cout << words[i] << std::endl;
	}
}