#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "Contact.hpp"
# include <iomanip>

# define C_NRML "\033[0m"
# define C_BLCK "\033[30m"
# define C_RED  "\033[31m"
# define C_GREN "\033[32m"
# define C_YLLW "\033[33m"
# define C_BLUE "\033[34m"
# define C_PRPL "\033[35m"
# define C_AQUA "\033[36m"

class	PhoneBook {

private:
	Contact	contact[8];
	int		contact_num;

public:
	PhoneBook();
	void	add_contact(Contact contact);
	void	search_contact(int index);
	void	show_contact_info(int index);
	void	show_contact_fields(std::string field);
	~PhoneBook();

};

#endif