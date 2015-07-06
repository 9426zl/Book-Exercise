//
// Chapter07 Exercise15
//

#ifndef EX15_H
#define EX15_H

#include <string>
#include <iostream>

class Person {
    Person() = default;
    Person(const std::string &sname, const std::string  &addr):
    	name(sname), address(addr) { };
    Person(std::istream &is);
    
	std::string name;
	std::string address;
	
	std::string get_name() const {return name; }
	std::string get_address() const {return address; }
}

#endif
