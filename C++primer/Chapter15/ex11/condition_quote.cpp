//
// Chapter15 Exercise11
//

#include <iostream>
#include "condition_quote.h"


void Condition_quote::debug() const
{
	Quote::debug();
    std::cout << "max_qty= " << this->max_qty << " "
              << "discount= " << this->discount<< ".\n";
}
