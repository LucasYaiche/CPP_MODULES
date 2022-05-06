#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <string>
#include "Contact.hpp"

class PhoneBook
{
	public :
		PhoneBook();
		~PhoneBook();

		int	getPos();
		int	getIndex();
		Contact	getContact(int pos);

		void	setPos(int nbr);
		void	setIndex(int nbr);
		void	setContact(Contact contact);
	
	private :
		int		_pos;
		int		_index;

		Contact	_contacts[8];
};

#endif