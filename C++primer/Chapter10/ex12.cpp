//
// Chapter10 Exercise12
//

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "ex12.h"

inline bool compareIsbn(const Sales_data &isbn1, const Sales_data &isbn2)
{
	return isbn1.isbn() < isbn2.isbn();
}

int main()
{
	Sales_data s1("0001"), s2("0002"), s3("0003");
	std::vector<Sales_data> sv{s1, s2, s3};

	std::sort(sv.begin(), sv.end(), compareIsbn);

	for(const auto &elem : sv)
		std::cout << elem.isbn() << " ";
	std::cout << std::endl;

	return 0;
}