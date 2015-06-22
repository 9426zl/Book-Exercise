//
// Chapter13 Exercise19
//

#ifndef ex19_h
#define ex19_h

#include <string>

class Employee {
public:
	Employee();
	Employee(const std::string &name);
	Employee(const Employee&) = delete;
	Employee& operator=(const Employee&) = delete;

	const int id() const{return ID;}

private:
	std::string employ_name;
	int ID;
	static int increment;
};

#endif