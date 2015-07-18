//
// Chapter15 Exercise07
//

#ifndef CONDITION_QUOTE_H
#define CONDITION_QUOTE_H

#include <iostream>
#include "quote.h"

class Condition_quote : public Quote {
public:
	Condition_quote();
	Condition_quote(const std::string& book, double p, 
			   std::size_t max, double disc):
	Quote(book, p), max_qty(max), discount(disc) { }

	double net_price(std::size_t n) const override
	{ 
		return (n < max_qty) ? n * price * (1 - discount) :
							   (max_qty * (1 - discount) + (n - max_qty)) * price;
	}
	void debug() const override;

private:
	std::size_t max_qty = 0;
	double discount = 0.0;
};

void Condition_quote::debug() const
{
	Quote::debug();
    std::cout << "max_qty= " << this->max_qty << " "
              << "discount= " << this->discount<< ".\n";
}


#endif
