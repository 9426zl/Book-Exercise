//
// Chapter16 Exercise20
//

#include <iostream>
#include <vector>


template<typename T>
std::ostream& print(std::ostream &os, T& c);

int main()
{
	std::vector<int> ivec(10, 1);
	print(std::cout, ivec);

	return 0;
}

template<typename T>
std::ostream& print(std::ostream &os, T& c)
{
	auto iter = c.begin();
	auto iter_end = c.end();

	while(iter != iter_end)
	{
		os << *iter++ << " ";
	}

	return os;
}