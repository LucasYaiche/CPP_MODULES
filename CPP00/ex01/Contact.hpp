#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>

class Contact
{	
	public :
		Contact();
		~Contact();
	
		std::string getFirstname();
		std::string getName();
		std::string getNickname();
		std::string getNumber();
		std::string getSecret();

		void setFirstname(std::string string);
		void setName(std::string string);
		void setNickname(std::string string);
		void setNumber(std::string string);
		void setSecret(std::string string);
		
	private:
		std::string _first_name;
		std::string _name;
		std::string _nickname;
		std::string _number;
		std::string _secret;
};

#endif