#ifndef CONTACT_HPP
# define CONTACT_HPP

#include "Helper.hpp"
#include <iostream>

class Contact
{
	private:
		std::string	_firstname;
		std::string	_lastname;
		std::string	_nickname;
		std::string	_phonenumber;
		std::string	_darkestsecret;

	public:
		std::string getFirstname();
		std::string getLastname();
		std::string getNickname();
		std::string getPhonenumber();
		std::string getDarkestSecret();

		void		setFirstname(std::string firstname);
		void		setLastname(std::string lastname);
		void		setNickname(std::string nickname);
		void		setPhonenumber(std::string phonenumber);
		void		setDarkestSecret(std::string darkestsecret);

		Contact();
		~Contact();
};

#endif