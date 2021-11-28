#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

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
	int	contact_num;
	int	get_user_search_index();
	Contact	get_user_contact();
	void	show_contact_info(int index);
	void	show_contact_header();
	void	show_contact_fields(std::string field);
	void	show_contact(int index);

public:
	PhoneBook();
	int	get_contact_num();
	void	add_contact();
	void	search_contact();
	~PhoneBook();

};

#endif