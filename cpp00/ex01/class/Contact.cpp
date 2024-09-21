#include "Contact.hpp"

std::string	Contact::GetFirstName() {
	return this->first_name;
}

void	Contact::SetFirstName(std::string str) {
	this->first_name = str;
}

std::string	Contact::GetLastName()
{
	return this->last_name;
}

void	Contact::SetLastName(std::string str) {
	this->last_name = str;
}

std::string	Contact::GetNickname() {
	return this->nickname;
}

void	Contact::SetNickname(std::string str) {
	this->nickname = str;
}

std::string	Contact::GetPhoneNumber() {
	return this->phone_number;
}

void	Contact::SetPhoneNumber(std::string str) {
	this->phone_number = str;
}

std::string	Contact::GetDrkSecret() {
	return this->drk_secret;
}

void	Contact::SetDrkSecret(std::string str) {
	this->drk_secret = str;
}