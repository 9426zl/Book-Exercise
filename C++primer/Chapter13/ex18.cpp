//
// Chapter13 Exercise18
//

#include "ex18.h"

int Employee::increment = 0;

Employee::Employee() {
	ID = increment++;
}

Employee::Employee(const std::string &name) {
	employ_name = name;
	ID = increment++;
}

int main()
{
	return 0;
}
