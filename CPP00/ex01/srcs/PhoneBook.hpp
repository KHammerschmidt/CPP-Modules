#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include "Output.hpp"
#include "Input.hpp"
#include "Helper.hpp"

class PhoneBook
{
	private:
		Contact 		contact[8];
		unsigned int	position;

	public:
		PhoneBook();
		~PhoneBook();
		void 			Add(void);
		void 			Search(void);
		int				Exit(void);

	private:
		void 			AddContact(std::string firstname,
						std::string lastname,
						std::string	nickname,
						std::string	phonenumber,
						std::string darkestsecret);

		std::string		AddFirstname();
		std::string		AddLastname();
		std::string		AddNickname();
		std::string		AddPhonenumber();
		std::string		AddDarkestsecret();

		void 			DisplayPhoneBook(void);
		void 			DisplayContactColumns(int i);
		void 			DisplayHeader(void);
		unsigned int	IndexSearch(void);
		void 			DisplayContact(int i);
		bool 			ValidIndex(unsigned int index);

};

#endif
