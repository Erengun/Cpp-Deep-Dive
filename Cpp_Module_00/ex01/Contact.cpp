#include "Contact.hpp"

const std::string& Contact::getFirstName() const
{
	return (this->first_name);
}

const std::string& Contact::getLastName() const
{
	return (this->last_name);
}

const std::string& Contact::getNickname() const
{
	return (this->nickname);
}

const std::string& Contact::getSecret() const
{
	return (this->secret);
}

const std::string& Contact::getPhoneNumber() const
{
	return (this->phone_number);
}

void Contact::setFirstName(const std::string& first_name)
{
	this->first_name = first_name;
}

void Contact::setLastName(const std::string& last_name)
{
	this->last_name = last_name;
}

void Contact::setNickname(const std::string& nickname)
{
	this->nickname = nickname;
}

void Contact::setSecret(const std::string& secret)
{
	this->secret = secret;
}

void Contact::setPhoneNumber(const std::string& phone_number)
{
	this->phone_number = phone_number;
}

Contact::Contact(const std::string& first_name, const std::string& last_name, const std::string& nickname, const std::string& phone_number, const std::string& secret)
{
	this->first_name = first_name;
	this->last_name = last_name;
	this->nickname = nickname;
	this->phone_number = phone_number;
	this->secret = secret;
}

Contact::Contact()
{
}

Contact::~Contact()
{
}