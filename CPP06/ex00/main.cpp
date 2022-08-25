#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>

int	main(int argc, char **argv)
{

	if (argc != 2)
	{
		std::cout << "Argument error" << std::endl;
		return 0;
	}

	std::string number = argv[1];

	if (number == "+inff" || number == "+inf" || number == "inff" || number == "inf")
	{
		std::cout << "char: " << "Impossible" << std::endl;
		std::cout << "int: " << "Impossible" << std::endl;
		std::cout << "float: " << "inff" << std::endl;
		std::cout << "double: " << "inf" << std::endl;
	}
	else if (number == "-inff" || number == "-inf")
	{
		std::cout << "char: " << "Impossible" << std::endl;
		std::cout << "int: " << "Impossible" << std::endl;
		std::cout << "float: " << "-inff" << std::endl;
		std::cout << "double: " << "-inf" << std::endl;
	}
	else if (number == "nanf" || number == "nan")
	{
		std::cout << "char: " << "Impossible" << std::endl;
		std::cout << "int: " << "Impossible" << std::endl;
		std::cout << "float: " << "nanf" << std::endl;
		std::cout << "double: " << "nan" << std::endl;
	}
	else
	{
		size_t	count = 0;
		for (size_t i = 0; i < strlen(argv[1]); i++)
		{
			if (argv[1][i] == '.')
				count++;
		}
		if (!isdigit(argv[1][0]) || count > 1)
		{
			std::cout << "char: " << "Impossible" << std::endl;
			std::cout << "int: " << "Impossible" << std::endl;
			std::cout << "float: " << "Impossible" << std::endl;
			std::cout << "double: " << "Impossible" << std::endl;
		}

		else
		{
			size_t 	i = -1;
			while (++i < strlen(argv[1]))
			{
				if (i != strlen(argv[1]) && (!isdigit(argv[1][i]) && argv[1][i] != '.') )
				{
					std::cout << "char: " << "Impossible" << std::endl;
					std::cout << "int: " << "Impossible" << std::endl;
					std::cout << "float: " << "Impossible" << std::endl;
					std::cout << "double: " << "Impossible" << std::endl;
					return 0;
				}
				else if (i == strlen(argv[1]) && (!isdigit(argv[1][i]) && argv[1][i] != 'f'))
				{
					std::cout << "char: " << "Impossible" << std::endl;
					std::cout << "int: " << "Impossible" << std::endl;
					std::cout << "float: " << "Impossible" << std::endl;
					std::cout << "double: " << "Impossible" << std::endl;
					return 0;
				}
			}
			double	num = strtod(argv[1], NULL);

			if (num >= 32 && num < 127)
			{
				std::cout << "char: " << static_cast<char>(num) << std::endl;
			}
			else
				std::cout << "char: " << "Non displayable" << std::endl;
			std::cout << "int: " << static_cast<int>(num) << std::endl;
			std::cout << "float: " << static_cast<float>(num) << "f" << std::endl;
			std::cout << "double: " << static_cast<double>(num) << std::endl;
			return 0;
		}
		return 0;
	}
	return 0;
}
