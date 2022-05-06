#include "PhoneBook.hpp"
#include <iostream>

/*=================*/ 
/*   Constructor   */
/*=================*/

PhoneBook::PhoneBook()
{
	std::cout << "PhoneBook constructor called" << std::endl;
	_pos = 0;
}

/*=================*/ 
/*    Destructor   */
/*=================*/

PhoneBook::~PhoneBook()
{
	std::cout << "PhoneBook destructor called" << std::endl;
}

/*=================*/ 
/*     Getters     */
/*=================*/

int	PhoneBook::getPos()
{
	return PhoneBook::_pos;
}

int	PhoneBook::getIndex()
{
	return PhoneBook::_index;
}


Contact PhoneBook::getContact(int pos)
{
	return _contacts[pos];
}

/*=================*/ 
/*     Setters     */
/*=================*/

void	PhoneBook::setPos(int nbr)
{
	if (nbr > 7)
		nbr = 0;
	this->_pos = nbr;
}

void	PhoneBook::setIndex(int nbr)
{
	this->_index = nbr;
}

void	PhoneBook::setContact(Contact contact)
{
	this->_contacts[_pos] = contact;
}