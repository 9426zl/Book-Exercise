class person
{
	string get_name() const
	{
		return name;
	}
	string ger_address() const
	{
		return address;
	}

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