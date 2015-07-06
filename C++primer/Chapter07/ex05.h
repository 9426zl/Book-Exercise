//
// Chapter07 Exercise05
//

#ifndef EX05_H
#define EX05_H

#include <string>

class person {

	std::string name;
	std::string address;
	
	std::string get_name() const {return name; }
	std::string get_address() const {return address; }
}

#endif
