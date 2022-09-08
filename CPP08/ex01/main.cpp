#include "Span.hpp"

int	main(void)
{
	std::cout << "-----INVALID SIZE TEST-----" << std::endl;
	try
	{
		Span test = Span(1);
	}
	catch(InvalidSizeException& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl << std::endl;

	std::cout << "-----INVALID TEST-----" << std::endl;
	try
	{
		Span no(80);
		no.addNumber(5);
		no.addNumber(8);
		std::cout << no.shortestSpan() << std::endl;
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	/**************************************************/

	std::cout << "-----PDF TESTS-----" << std::endl;
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	std::cout << std::endl << std::endl;

	/**************************************************/

	std::cout << "-----RANGE TEST-----" << std::endl;
	Span 				range = Span(5);
	std::vector<int>	vec(5, 1);

	std::cout << range.getCount() << std::endl;
	range.addNumber(vec.begin(), vec.end());
	std::cout << range.getCount() << std::endl;
	try
	{
		range.addNumber(1);
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}



}