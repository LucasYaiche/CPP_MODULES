#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <string>
#include <iomanip>
#include <ctype.h>

void	putline(std::string data)
{
	if (data.length() <= 10)
	{
		std::cout << std::setw(10) << data << "|";
	}
	else
	{
		std::cout << data.substr(0, 9) << "." << "|";
	}

}

bool is_digits(const std::string &str)
{
   for(unsigned long i=0; i < str.length(); i++)
   {
	   if (!std::isdigit(str[i]))
			return 0;
   }
   return 1;
}

int main(void)
{
	std::string line;
	Contact		contact;
	PhoneBook	phonebook;
	std::string	ind;

	while (getline(std::cin, line))
	{
		if (std::cin.eof())
		{
			std::cout << std::endl << "End of the program" << std::endl;
			return 0;
		}
		if (line == "ADD")
		{
			std::cout << "First name:";
			std::cin >> line;
			contact.setFirstname(line);
			std::cout << "Name:";
			std::cin >> line;
			contact.setName(line);
			std::cout << "Nickname:";
			std::cin >> line;
			contact.setNickname(line);
			std::cout << "Number:";
			std::cin >> line;
			contact.setNumber(line);
			std::cout << "Secret:";
			std::cin >> line;
			contact.setSecret(line);
			phonebook.setContact(contact);
			phonebook.setPos(phonebook.getPos() + 1);
		}
		else if (line == "SEARCH")
		{
			for(int	i=0; i < 8; i++)
			{
				phonebook.setIndex(i);
				contact = phonebook.getContact(phonebook.getIndex());
				std::cout << "|" << i + 1 << "|";
				putline(contact.getFirstname());
				putline(contact.getName());
				putline(contact.getNickname());
				std::cout << std::endl;
			}
			std::cout << "Enter id:";
			std::cin >> ind;
			if (std::cin.eof())
			{
				std::cout << std::endl << "End of the program" << std::endl;
				return 0;
			}
			while (!is_digits(ind) || atoi(ind.c_str()) <= 0 || atoi(ind.c_str()) > 8)
			{
				std::cout << "wrong argument. Try again:";
				std::cin >> ind;
			}
			contact = phonebook.getContact(atoi(ind.c_str()) - 1);
			std::cout << "First name: " << contact.getFirstname() << std::endl;
			std::cout << "Name: " << contact.getName() << std::endl;
			std::cout << "Nickname: " << contact.getNickname() << std::endl;
			std::cout << "Number: " << contact.getNumber() << std::endl;
			std::cout << "Secret: " << contact.getSecret() << std::endl;
		}
		else if (line == "EXIT")
		{
			std::cout << "exit." << std::endl;
			return(0);
		}
	}

}