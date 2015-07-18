//
// Chapter15 Exercise26
//

#include <iostream>
#include "bulk_quote.h"

void Bulk_quote::debug() const
{
	Quote::debug();
	std::cout << "min_qty = " << this->min_qty << " "
		      << "discount = "<< this->discount << ".\n";
}
