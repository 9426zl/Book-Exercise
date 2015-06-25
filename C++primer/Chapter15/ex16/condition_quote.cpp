//
// Chapter15 Exercise16
//

#include <iostream>
#include "condition_quote.h"


void Condition_quote::debug() const
{
	Quote::debug();
    std::cout << "max_qty= " << quantity << " "
              << "discount= " << discount<< ".\n";
}
