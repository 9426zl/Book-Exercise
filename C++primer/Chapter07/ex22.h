//
// Chapter07 Exercise22
//

#ifndef EX22_H
#define EX22_H

#include <string>
#include <iostream>

class Person {
    friend std::istream &read(std::istream &is, Person &person);
    friend std::ostream &print(std::ostream &os, Person &person);

public:
	Person() = default;
    Person(const std::string &sname, const std::string  &addr):
    	name(sname), address(addr) { };
    Person(std::istream &is);
    
	std::string get_name() const {return name; }
	std::string get_address() const {return address; }

private:
	std::string name;
	std::string address;
};

std::istream &read(std::istream &is, Person &person)
{
	is >> person.name >> person.address;
	return is;
}

std::ostream &print(std::ostream &os, Person &person)
{
	os << person.name << person.address;
	return os;
}

#endif
