#include "Contact.hpp"
#include "Colors.hpp"
#include <array>
#include <iostream>
#include <iomanip>

class PhoneBook
{
private:
	std::array<Contact, 8> contacts;
	int 	size;
	int 	index;
public:
	PhoneBook();
	~PhoneBook();
	int		getSize() const;
	void	addContact(Contact contact);
	void	searchContactByIndex(int index);
	void	display_contact(int i) const;
	void	display_phonebook() const;
};

