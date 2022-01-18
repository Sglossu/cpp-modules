#pragma once
#include <iostream>

class Brain {
public:
	std::string		ideas[100];
	Brain();
	Brain(const Brain &other);
	Brain& operator=(const Brain& other);
	~Brain();

	void    setIdea(std::string idea);
	std::string getIdea() const;
};
