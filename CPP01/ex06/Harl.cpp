#include "Harl.hpp"

Harl::Harl()
{
	return ;
}

Harl::~Harl()
{
	return ;
}

void	Harl::complain(std::string level)
{
	void		(Harl::*type[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int			i;	

	for (i = 0; i < 4; i++)
	{
		if (levels[i] == level)
			break ;
	}
	switch(i)
	{
		case 0 :
			(this->*(type[0]))();
			break;
		case 1 :
			(this->*(type[1]))();
			break;
		case 2 :
			(this->*(type[2]))();
			break;
		case 3 :
			(this->*(type[3]))();
			break;
		case 4 :
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
}

void	Harl::debug(void)
{
	std::cout << DEBUG << std::endl;
}

void	Harl::info(void)
{
	std::cout << INFO << std::endl;
}

void	Harl::warning(void)
{
	std::cout << WARNING << std::endl;
}

void	Harl::error(void)
{
	std::cout << ERROR << std::endl;
}