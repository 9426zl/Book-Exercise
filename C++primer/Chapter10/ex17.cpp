//
// Chapter10 Exercise17
//

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "ex12.h"

int main()
{
	Sales_data s1("0001"), s2("0003"), s3("0002");
	std::vector<Sales_data> sv{s1, s2, s3};

	std::sort(sv.begin(), sv.end(), [](const Sales_data &isbn1, const Sales_data &isbn2){
		return isbn1.isbn() < isbn2.isbn();});

	for(const auto &elem : sv)
		std::cout << elem.isbn() << " ";
	std::cout << std::endl;

	return 0;
}
