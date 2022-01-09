#pragma once

#include <iostream>
#include <string>

class User {
private:
	std::string first_name;
	std::string last_name;
	std::string nick_name;
	std::string secret;
	int 		number;
public:
//	User(const std::string &s, int a);

	void setFirstName(const std::string &firstName);

	void setLastName(const std::string &lastName);

	void setNickName(const std::string &nickName);

	void setSecret(const std::string &secret);

	void setNumber(int number);

//##########################################################################

	const std::string &getFirstName() const;

	const std::string &getLastName() const;

	const std::string &getNickName() const;

	const std::string &getSecret() const;

	int getNumber() const;
};

