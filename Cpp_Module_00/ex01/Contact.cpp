#include "Contact.hpp"

const std::string& Contact::getFirstName() const
{
	return (this->_firstName);
}

const std::string& Contact::getLastName() const
{
	return (this->_lastName);
}

const std::string& Contact::getNickname() const
{
	return (this->_nickName);
}

const std::string& Contact::getSecret() const
{
	return (this->secret);
}

const std::string& Contact::getPhoneNumber() const
{
	return (this->_phoneNumber);
}

void Contact::setFirstName(const std::string& first_name)
{
	this->_firstName = first_name;
}

void Contact::setLastName(const std::string& last_name)
{
	this->_lastName = last_name;
}

void Contact::setNickname(const std::string& nickname)
{
	this->_nickName = nickname;
}

void Contact::setSecret(const std::string& secret)
{
	this->secret = secret;
}

void Contact::setPhoneNumber(const std::string& phone_number)
{
	this->_phoneNumber = phone_number;
}

Contact::Contact(const std::string& first_name, const std::string& last_name, const std::string& nickname, const std::string& phone_number, const std::string& secret)
{
	this->_firstName = first_name;
	this->_lastName = last_name;
	this->_nickName = nickname;
	this->_phoneNumber = phone_number;
	this->secret = secret;
}

Contact::Contact()
{
}

Contact::~Contact()
{
}