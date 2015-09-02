//
// Chapter16 Exericse03
//

#include <iostream>
#include <vector>
#include "sales_data.h"

template<typename T>
int compare(const T &v1, const T &v2)
{
	if (v1 < v2) return -1;
	if (v1 > v2) return 1;
	return 0;
}

int main()
{
	std::vector<int> ivec1{1, 2, 3}, ivec2{2, 3};
	Sales_data s1("2014001", 100, 10.0);
	Sales_data s2("2014002", 99, 10.0);
	
	std::cout << compare(ivec1, ivec2) << std::endl;
	std::cout << compare(s1, s2) << std::endl;
	
	return 0;
}


