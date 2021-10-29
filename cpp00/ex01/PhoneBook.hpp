#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "Contact.hpp"

class	PhoneBook {

private:
	Contact	contact[8];
	int		contact_num;

public:
	PhoneBook();
	void	add_contact(Contact contact);
	void	search_contact(char index);
	~PhoneBook();
};

#endif