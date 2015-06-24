//
// Chapter14 Exercise35
//

#ifndef ex35_h
#define ex35_h

#include <iostream>
#include <string>

class GetString {
public:
	GetString(std::istream &i = std::cin) : is(i) {}
	std::string operator()() const {
		std::string str;
		std::getline(is, str);
		return is ? str : "";
	}

private:
	std::istream &is;
};
#endif