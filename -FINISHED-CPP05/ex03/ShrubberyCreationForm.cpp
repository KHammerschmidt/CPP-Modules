#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("Shrubbery Creation Form", 145, 137) 
{
	this->_target = "no target";
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy)
{
	*this = copy;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
	this->_target = other._target;

	return *this;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) 
	: Form("Shrubbery Creation Form", 145, 137)
{
	this->_target = target + "_shrubbery";
}

void	ShrubberyCreationForm::executeSubForm(void) const
{
	std::ofstream targetFile;
	
	targetFile.open(this->_target);
	if (!targetFile.is_open())
	{
		std::cout << "Error: unable to open " << this->_target << "." << std::endl;
		return ;
	}

	targetFile << "                     .         ;  							" << std::endl;
	targetFile << "           .              .              ;%     ;;   		" << std::endl;
	targetFile << "             ,           ,                :;%  %;   			" << std::endl;
	targetFile << "              :         ;                   :;%;'     .,  	" << std::endl;
	targetFile << "     ,.        %;     %;            ;        %;'    ,;		" << std::endl;
	targetFile << "       ;       ;%;  %%;        ,     %;    ;%;    ,%'		" << std::endl;
	targetFile << "        %;       %;%;      ,  ;       %;  ;%;   ,%;' 		" << std::endl;
	targetFile << "         ;%;      %;        ;%;        % ;%;  ,%;'			" << std::endl;
	targetFile << "          `%;.     ;%;     %;'         `;%%;.%;'				" << std::endl;
	targetFile << "           `:;%.    ;%%. %@;        %; ;@%;%'				" << std::endl;
	targetFile << "              `:%;.  :;bd%;          %;@%;'					" << std::endl;
	targetFile << "                `@%:.  :;%.         ;@@%;'   				" << std::endl;
	targetFile << "                  `@%.  `;@%.      ;@@%;         			" << std::endl;
	targetFile << "                    `@%%. `@%%    ;@@%;        				" << std::endl;
	targetFile << "                      ;@%. :@%%  %@@%;       				" << std::endl;
	targetFile << "                        %@bd%%%bd%%:;     					" << std::endl;
	targetFile << "                          #@%%%%%:;;							" << std::endl;
	targetFile << "                          %@@%%%::;							" << std::endl;
	targetFile << "                          %@@@%(o);  . '         			" << std::endl;
	targetFile << "                          %@@@o%;:(.,'         				" << std::endl;
	targetFile << "                      `.. %@@@o%::;         					" << std::endl;
	targetFile << "                         `)@@@o%::;        					" << std::endl;
	targetFile << "                          %@@(o)::;        					" << std::endl;
	targetFile << "                         .%@@@@%::;         					" << std::endl;
	targetFile << "                         ;%@@@@%::;.         				" << std::endl;
	targetFile << "                        ;%@@@@%%:;;;. 						" << std::endl;
	targetFile << "                    ...;%@@@@@%%:;;;;,..						" << std::endl;

	targetFile.close();
}
