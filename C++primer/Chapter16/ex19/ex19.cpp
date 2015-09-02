//
// Chapter16 Exercise19
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
	typedef typename T::size_type size_type;

	auto iter = c.begin();
	size_type i = 0;

	while(i != c.size())
	{
		os << *iter++ << " ";
		++i;
	}

	return os;
}