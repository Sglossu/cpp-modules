#include "User.hpp"

//########################GETTTT#######################################

const std::string &User::getFirstName() const {
	return first_name;
}

const std::string &User::getLastName() const {
	return last_name;
}

const std::string &User::getNickName() const {
	return nick_name;
}

const std::string &User::getSecret() const {
	return secret;
}

int User::getNumber() const {
	return number;
}
//###########################SETTTTT####################################

void User::setFirstName(const std::string &firstName) {
	first_name = firstName;
}

void User::setLastName(const std::string &lastName) {
	last_name = lastName;
}

void User::setNickName(const std::string &nickName) {
	nick_name = nickName;
}

void User::setSecret(const std::string &secret) {
	User::secret = secret;
}

void User::setNumber(int number) {
	User::number = number;
}
