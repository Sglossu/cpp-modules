#include <iostream>
#include <fstream>
#include <cstdio>

int main(int argc, char **argv) {
	if (argc != 4) {
		std::cerr << "Wrong arguments" << std::endl;
		return 1;
	}
	else {
		std::string 	s1 = argv[2];
		std::string 	s2 = argv[3];
		std::fstream	file1;
		std::fstream 	file2;
		std::fstream	tmp;
		std::string 	dst;
		int 			len = s1.length();

		file1.open(argv[1], std::fstream::in);
		if (!file1.is_open()) {
			std::cerr << "Error of open" << std::endl;
			return 1;
		}
		file2.open(std::strcat(argv[1], ".replace"), std::fstream::in | std::fstream::out | std::fstream::trunc);
		if (file1.is_open()) {
			if (file2.is_open()) {

				while (std::getline(file1, dst)) {
					if (!s1.empty() && !s2.empty() && strcmp(s1.c_str(), s2.c_str())) {

						const char *ptr = strstr(dst.c_str(), s1.c_str());
						if (ptr)
							std::cout << "ptr: |" << ptr << "|" << std::endl;
						while (ptr) {
							if (ptr) {
								size_t pos = ptr - dst.c_str();
								dst.erase(pos, len);
								dst.insert(pos, s2);
								std::cout << "pos: " << pos << std::endl;
							}
							ptr = strstr(dst.c_str(), s1.c_str());
							if (ptr)
								std::cout << "ptr: |" << ptr << "|" << std::endl;
						}
					}
					file2 << dst << std::endl;
					if (file1.eof())
						break;
				}
				file2.close();
			}
			else {
				std::cerr << "Error of open" << std::endl;
				return 1;
			}
			file1.close();
		}
		else {
			std::cerr << "Error of open" << std::endl;
			return 1;
		}
	}
	return 0;
}
