//
// Chapter15 Exercise11
//

#include <iostream>
#include <string>
#include "quote.h"
#include "bulk_quote.h"
#include "condition_quote.h"

double print_total (std::ostream &os, const Quote &item, size_t n);

int main()
{
	Quote book1("Alpha", 10.0);
	Bulk_quote book2("Beta", 10.0, 20, 0.2);
	Condition_quote book3("Charlie", 10.0, 8, 0.2);

	print_total(std::cout, book1, 10);
	print_total(std::cout, book2, 10);
	print_total(std::cout, book3, 10);

	book1.debug();
	std::cout << "\n";
	book2.debug();
	std::cout << "\n";
	book3.debug();
	std::cout << "\n";

	return 0;
}

double print_total (std::ostream &os, const Quote &item, size_t n)
{
	double ret = item.net_price(n);

	os << "ISBN: " << item.isbn()
		<< " # sold: " << n << " total due: " << ret << std::endl;
	
	return ret;
}