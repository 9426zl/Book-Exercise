//
// Chapter07 Exericse04
//

#ifndef PERSON_H
#define PERSON_H

class person
{
public:
	person(string pName, string pAddress)
	{
		name = pName;
		address = pAddress;
	}
private:
	string name;
	string address;
}

#endif
