#include "PhoneBook.hpp"

std::string divideString(const std::string &name)
{
    if (name.length() > 10)
    {
        std::string new_name = name.substr(0, 9);
        new_name += ".";
        return new_name;
    }
    return name;
}

int PhoneBook::getSize() const
{
    return (this->size);
}

void PhoneBook::addContact(Contact contact)
{
    // IF MORE THAN 8 CONTACTS, CONTACTS WILL BE OVERWRITTEN
    if (this->size < 8)
    {
        this->contacts[this->index] = contact;
        this->index = (this->index + 1) % 8;
        this->size++;
    }
    else
    {
        this->contacts[this->index] = contact;
        this->index = (this->index + 1) % 8;
    }
}

void PhoneBook::searchContactByIndex(int index)
{
    std::cout << "Enter index: ";
    std::cin >> index;
    std::cin.ignore();
    std::cout << "\033[2J\033[1;1H";
    
    if (std::cin.fail() || index < 0 || index >= this->size)
    {
        std::cout << "Invalid indexx" << std::endl;
        return;
    }
    display_contact(index);

}

void PhoneBook::display_contact(int i) const
{
    std::cout << Color::BOLD << Color::CYAN << "+-----------------------------------------------------------------+"
              << "\n";
    std::cout << Color::BOLD << "|          Contact Information                                    |"
              << "\n";
    std::cout << Color::BOLD << "+-----------------------------------------------------------------+" << Color::RESET << "\n";

    std::cout << Color::YELLOW << "First Name:" << Color::RESET << " " << this->contacts[i].getFirstName() << std::endl;
    std::cout << Color::YELLOW << "Last Name:" << Color::RESET << " " << this->contacts[i].getLastName() << std::endl;
    std::cout << Color::YELLOW << "Nickname:" << Color::RESET << " " << this->contacts[i].getNickname() << std::endl;
    std::cout << Color::YELLOW << "Number:" << Color::RESET << " " << this->contacts[i].getPhoneNumber() << std::endl;
    std::string darkest_secret = this->contacts[i].getSecret();
    if (darkest_secret.size() > 30)
    {
        std::cout << Color::YELLOW << "Darkest Secret:" << Color::RESET << " " << darkest_secret.substr(0, 30) << "..." << std::endl;
        std::cout << darkest_secret.substr(30) << std::endl;
    }
    else
    {
        std::cout << Color::YELLOW << "Darkest Secret:" << Color::RESET << " " << darkest_secret << std::endl;
        std::cout << std::endl;
    }
}

void PhoneBook::display_phonebook() const
{
    std::cout << Color::CYAN << "+---------------------------------------------------+" << Color::RESET << "\n";
    std::cout << Color::CYAN << "|              PhoneBook                            |" << Color::RESET << "\n";
    std::cout << Color::CYAN << "+---------------------------------------------------+" << Color::RESET << "\n";

    std::cout << Color::YELLOW << "|  Index  |  First Name  |  Last Name  |  Nickname  |" << Color::RESET << "\n";

    for (int i = 0; i < this->size; i++)
    {
        std::cout << Color::CYAN << "+---------+--------------+-------------+------------+" << Color::RESET << "\n";
        std::cout << Color::YELLOW << "|    " << i << "    |"
                  << " ";
        std::cout << std::left << std::setw(12) << divideString(this->contacts[i].getFirstName()) << " | ";
        std::cout << std::left << std::setw(11) << divideString(this->contacts[i].getLastName()) << " | ";
        std::cout << std::left << std::setw(10) << divideString(this->contacts[i].getNickname()) << " |" << Color::RESET << "\n";
    }
    std::cout << Color::CYAN << "+---------------------------------------------------+" << Color::RESET << "\n";
}

PhoneBook::PhoneBook() : size(0), index(0)
{
}

PhoneBook::~PhoneBook()
{
}