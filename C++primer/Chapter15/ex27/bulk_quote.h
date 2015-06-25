//
// Chapter15 Exercise27
//

#ifndef BULK_QUOTE_H
#define BULK_QUOTE_H

#include "disc_quote.h"

class Bulk_quote : public Disc_quote {
public:
	Bulk_quote() = default;
	using Disc_quote::Disc_quote;

	Bulk_quote(const Bulk_quote& bq) : Disc_quote(bq)
    { std::cout << "Bulk_quote : copy constructor\n"; }

    Bulk_quote(Bulk_quote&& bq) : Disc_quote(std::move(bq))
    {std::cout << "Bulk_quote : move constructor\n";}

	double net_price(std::size_t) const override;

};

#endif