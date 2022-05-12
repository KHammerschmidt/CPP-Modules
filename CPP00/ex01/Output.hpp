#ifndef OUTPUT_HPP
# define OUTPUT_HPP

# include "Helper.hpp"
# include <iostream>
# include <iomanip>

namespace Output
{
	void	PrintString(std::string string);
	void	PrintStringEndl(std::string string);

	void	PromptCommand();
	void	PromptFirstname();
	void	PromptLastname();
	void	PromptNickname();
	void	PromptDarkestsecret();
	void	PromptPhonenumber();

	void 	PrintColumn(std::string string);
	void	PromptIndex();
	void 	DisplayCase(void);
	void 	ExitPhoneBook(void);
	void	DisplayWelcomingMessage(void);
}

#endif
