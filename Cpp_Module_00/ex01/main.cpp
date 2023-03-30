#include "PhoneBook.hpp"

std::string getNonEmptyValue(const std::string &prompt)
{
	std::string value;

	while (true)
	{
		std::cout << Color::CYAN << prompt << Color::RESET << std::flush;
		std::getline(std::cin, value);
		if (std::cin.eof())
			exit(0);
		if (!value.empty())
		{
			return value;
		}
	}
}

Contact createContact()
{
	std::string first_name, last_name, nickname, phone_number, darkest_secret;

	// Get non-empty values for each field
	first_name = getNonEmptyValue("Enter first name: ");
	last_name = getNonEmptyValue("Enter last name: ");
	nickname = getNonEmptyValue("Enter nickname: ");
	phone_number = getNonEmptyValue("Enter phone number: ");
	darkest_secret = getNonEmptyValue("Enter darkest secret: ");
	// Construct and return Contact object
	Contact contact(first_name, last_name, nickname, phone_number, darkest_secret);
	// clear the screen
	std::cout << "\033[2J\033[1;1H";
	return contact;
}

int main()
{
	PhoneBook phoneBook;
	std::string command;
	int index = -1;

	while (1)
	{
		std::cout << Color::BOLD << "Enter a command: " << Color::RESET;
		std::getline(std::cin, command);
		if (std::cin.eof())
			break;
		if (std::cin.fail())
		{
			std::cerr << "Error reading input. Ignoring input and continuing." << std::endl;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			continue;
		}
		if (command == "EXIT")
			break;
		else if (command == "ADD")
			phoneBook.addContact(createContact());
		else if (command == "SEARCH")
		{
			phoneBook.display_phonebook();
			phoneBook.searchContactByIndex(index);
		}
		else
			std::cout << "Invalid command" << std::endl;
	}
}