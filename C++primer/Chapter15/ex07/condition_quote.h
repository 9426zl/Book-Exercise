//
// Chapter15 Exercise07
//

#ifndef CONDITION_QUOTE_H
#define CONDITION_QUOTE_H

#include <string>
#include "quote.h"

class Condition_quote : public Quote {
public:
	Condition_quote() = default;
	Condition_quote(const std::string& book, double p, 
			   std::size_t max, double disc):
	Quote(book, p), max_qty(max), discount(disc) { }

	double net_price(std::size_t n) const override
	{ 
		return (n < max_qty) ? n * price * (1 - discount) :
							   (max_qty * (1 - discount) + (n - max_qty)) * price;
	}
private:
	std::size_t max_qty = 0;
	double discount = 0.0;
};


#endif