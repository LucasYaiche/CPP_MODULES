#include "Contact.hpp"

Contact::Contact()
{
	return ;
}

Contact::~Contact()
{
	return ;
}

/*=================*/ 
/*     Getters     */
/*=================*/

std::string Contact::getFirstname()
{
	return this->_first_name;
}

std::string Contact::getName()
{
	return this->_name;
}

std::string Contact::getNickname()
{
	return this->_nickname;
}

std::string Contact::getNumber()
{
	return this->_number;
}

std::string Contact::getSecret()
{
	return this->_secret;
}

/*=================*/ 
/*     Setters     */
/*=================*/

void Contact::setFirstname(std::string string)
{
	this->_first_name = string;
}

void Contact::setName(std::string string)
{
	this->_name = string;
}

void Contact::setNickname(std::string string)
{
	this->_nickname = string;
}

void Contact::setNumber(std::string string)
{
	this->_number = string;
}

void Contact::setSecret(std::string string)
{
	this->_secret = string;
}