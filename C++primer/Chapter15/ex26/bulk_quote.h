//
// Chapter15 Exercise16
//

#ifndef BULK_QUOTE_H
#define BULK_QUOTE_H

#include "disc_quote.h"

class Bulk_quote : public Disc_quote {
public:
	Bulk_quote() = default;
	Bulk_quote(const std::string& book, double price, 
			   std::size_t qty, double disc):
	Disc_quote(book, price, qty, disc) 
	{ std::cout << "Bulk_quote : constructor taking 4 parameters\n"; }

	Bulk_quote(const Bulk_quote& bq) : Disc_quote(bq)
    { std::cout << "Bulk_quote : copy constructor\n"; }

    Bulk_quote(Bulk_quote&& bq) : Disc_quote(std::move(bq))
    {std::cout << "Bulk_quote : move constructor\n";}

	double net_price(std::size_t) const override;

};

#endif