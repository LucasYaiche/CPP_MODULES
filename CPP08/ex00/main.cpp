#include "Easyfind.hpp"

int main(void)
{
	int					intlist[] = {84, 96, 25, 1, 96};
	std::vector<int>	vector(intlist, intlist + 4);

	// for (int i = 0; i < 5; i++)
	// {
	// 	vector.push_back(i);
	// }

	std::cout << "-----TESTS-----" << std::endl;
	std::cout << "Wrong test: ";
	try
	{
		easyfind(vector, 6);
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "Good test : " << *easyfind(vector, 96) << std::endl;

}	