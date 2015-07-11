//
// Chapter11 Exercise11
//

#include <set>
#include "ex11.h"

bool compareIsbn(const Sales_data &lhs, const Sales_data &rhs)
{
	return lhs.isbn() < rhs.isbn();
}

int main()
{
	typedef decltype(compareIsbn)* compareType;
	std::multiset<Sales_data, compareType> bookstore(compareIsbn);
	
	return 0;
}
