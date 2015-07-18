//
// Chapter15 Exercise16
//

#ifndef CONDITION_QUOTE_H
#define CONDITION_QUOTE_H

#include <iostream>
#include "disc_quote.h"

class Condition_quote : public Disc_quote {
public:
	Condition_quote() = default;
	Condition_quote(const std::string& book, double price, 
			   std::size_t max, double disc):
	Disc_quote(book, price, max, disc) { }

	double net_price(std::size_t n) const override
	{ 
		return (n < quantity) ? n * price * (1 - discount) :
							   (quantity * (1 - discount) + (n - quantity)) * price;
	}
	void debug() const override;

};

void Condition_quote::debug() const
{
	Quote::debug();
    std::cout << "max_qty= " << quantity << " "
              << "discount= " << discount<< ".\n";
}


#endif
