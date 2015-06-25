//
// Chapter16 Exercise04
//

#include <iostream>
#include <vector>
#include <list>
#include <string>

template<typename iterator, typename value>
iterator find(const iterator& first, const iterator& last, const value& val)
{
	auto iter = first;
	for( ;iter != last && *iter != val; ++iter)

	return iter;
}

int main()
{
	std::vector<int> ivec(10, 1);

	auto result = find(ivec.cbegin(), ivec.cend(), 1);

	std::cout << *result << std::endl;

	std::list<std::string> slist(10, "alpha");

	auto result = find(slist.cbegin(), slist.cend(), "alpha");

	std::cout<< *result << std::endl;

	return 0;
}