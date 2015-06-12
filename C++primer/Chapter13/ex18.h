//
// Chapter13 Exercise18
//

#ifndef ex18_h
#define ex18_h

#include <string>

class Employee {
public:
	Employee();
	Employee(const std::string &name);

	const int id() const{return ID;}

private:
	std::string employ_name;
	int ID;
	static int increment;
};

#endif
