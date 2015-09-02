//
// Chapter16 Exercise06
//

#include <iostream>
#include <string>

template <typename T, unsigned size>
T* mybegin(T(&arr)[size])
{
	return arr;
}

template <typename T, unsigned size>
T* myend(T(&arr)[size])
{
	return arr + size;
}

int main()
{
	std::string s[] = {"0", "1", "2", "3"};
	std::cout << *mybegin(s) << std::endl;
	std::cout << *(myend(s) - 1) << std::endl;
	
	return 0;
}

