#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreation_", 145, 137), target("")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreation_" + target, 145, 137), target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &sc) : Form(sc.getName(), 145, 137), target(sc.getTarget())
{
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm &)
{
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

void	write_ascii_tree(std::ofstream& target_file)
{
	target_file
	<< "                                                                          \n"
	<< "                                                         .                \n"
	<< "                                              .         ;                 \n"
	<< "                 .              .              ;%     ;;                  \n"
	<< "                   ,           ,                :;%  %;                   \n"
	<< "                    :         ;                   :;%;'     .,            \n"
	<< "           ,.        %;     %;            ;        %;'    ,;              \n"
	<< "             ;       ;%;  %%;        ,     %;    ;%;    ,%'               \n"
	<< "              %;       %;%;      ,  ;       %;  ;%;   ,%;'                \n"
	<< "               ;%;      %;        ;%;        % ;%;  ,%;'                  \n"
	<< "                `%;.     ;%;     %;'         `;%%;.%;'                    \n"
	<< "                 `:;%.    ;%%. %@;        %; ;@%;%'                       \n"
	<< "                    `:%;.  :;bd%;          %;@%;'                         \n"
	<< "                      `@%:.  :;%.         ;@@%;'                          \n"
	<< "                        `@%.  `;@%.      ;@@%;                            \n"
	<< "                          `@%%. `@%%    ;@@%;                             \n"
	<< "                            ;@%. :@%%  %@@%;                              \n"
	<< "                              %@bd%%%bd%%:;                               \n"
	<< "                                #@%%%%%:;;                                \n"
	<< "                                %@@%%%::;                                 \n"
	<< "                                %@@@%(o);  . '                            \n"
	<< "                                %@@@o%;:(.,'                              \n"
	<< "                            `.. %@@@o%::;                                 \n"
	<< "                               `)@@@o%::;                                 \n"
	<< "                                %@@(o)::;                                 \n"
	<< "                               .%@@@@%::;                                 \n"
	<< "                               ;%@@@@%::;.                                \n"
	<< "                              ;%@@@@%%:;;;.                               \n"
	<< "                          ...;%@@@@@%%:;;;;,..                            \n"
	<< "                                                                          \n";
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (this->getIsSigned() == false)
		throw Form::NotSignedException();
	else if (executor.getGrade() > this->getExcuteGrade())
		throw Bureaucrat::GradeTooLowException();
	else
	{
		std::ofstream	target_file(this->target + "_shrubbery");
		if (target_file.fail())
			std::cerr << "Fail to open the file: " << this->target + "_shrubbery" << std::endl;
		else
		{
			std::cout << "Success to write ASCII trees inside <" << this->target + "_shrubbery>" << std::endl;
			write_ascii_tree(target_file);
		}
	}
}

std::string ShrubberyCreationForm::getTarget() const
{
	return this->target;
}