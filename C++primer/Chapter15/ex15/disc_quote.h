//
// Chapter15 Exercise15
//

#ifndef DISC_QUOTE_H
#define DISC_QUOTE_H

#include "quote.h"

class Disc_quote : public Quote {
public:
	Disc_quote() = default;
	Disc_quote(const std::string& book, double price,
			std::size_t qty, double disc):
	Qutoe(book, price), quantity(qty),discount(disc) { }
	double net_price(std::size_type) const = 0;

protected:
	std::size_t quantity = 0;
	double discount = 0.0;
};

#endif