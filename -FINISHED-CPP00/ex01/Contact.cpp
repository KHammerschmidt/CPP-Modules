#include "Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

std::string	Contact::getFirstname()
{
	return (_firstname);
}

std::string	Contact::getLastname()
{
	return (_lastname);
}

std::string	Contact::getPhonenumber()
{
	return (_phonenumber);
}

std::string	Contact::getNickname()
{
	return (_nickname);
}

std::string	Contact::getDarkestSecret()
{
	return (_darkestsecret);
}

void	Contact::setFirstname(std::string firstname)
{
	this->_firstname = firstname;
}

void	Contact::setLastname(std::string lastname)
{
	this->_lastname = lastname;
}

void	Contact::setNickname(std::string nickname)
{
	this->_nickname = nickname;
}

void	Contact::setPhonenumber(std::string phonenumber)
{
	this->_phonenumber = phonenumber;
}

void	Contact::setDarkestSecret(std::string darkestsecret)
{
	this->_darkestsecret = darkestsecret;
}
