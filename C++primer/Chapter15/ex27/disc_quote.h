//
// Chapter15 Exercise27
//

#ifndef DISC_QUOTE_H
#define DISC_QUOTE_H

#include "quote.h"

class Disc_quote : public Quote {
public:
	Disc_quote() {std::cout << "Disc_quote:default constructor";}
	Disc_quote(const std::string& book, double price,
			std::size_t qty, double disc):
	Quote(book, price), quantity(qty),discount(disc) 
		{std::cout << "Disc_quote:constructor taking 4 parameters\n"; }
	
	Disc_quote(const Disc_quote& dq) :
        Quote(dq), quantity(dq.quantity), discount(dq.discount)
    { std::cout << "Disc_quote : copy constructor.\n";}
	
	Disc_quote(Disc_quote&& dq) :
        Quote(std::move(dq)), quantity(std::move(dq.quantity)), discount(std::move(dq.discount))
    { std::cout << "Disc_quote : move constructor.\n";}

	double net_price(std::size_t) const override = 0;

	~Disc_quote()
    {
        std::cout << "Dis_quote:destructor\n";
    }

protected:
	std::size_t quantity = 0;
	double discount = 0.0;
};

#endif