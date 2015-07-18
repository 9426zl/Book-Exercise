//
// Chapter15 Exercise28
//

#ifndef QUOTE_H
#define QUOTE_H

#include <iostream>
#include <string>

class Quote {
public:
	Quote() {std::cout << "Quote:default constructor";}
	Quote(const std::string &book, double sales_price):
			bookNo(book), price(sales_price) 
			{ std::cout << "Quote:constructor taking 2 parameters\n";}
	
	Quote(const Quote& q) : bookNo(q.bookNo), price(q.price)
		{std::cout << "Quote:copy constructor\n"; }
	Quote(Quote&& q):bookNo(std::move(q.bookNo)), price(std::move(q.price))
	    {std::cout << "Quote:move constructor\n"; }
	
	std::string isbn() const{ return bookNo; }
	
	virtual double net_price(std::size_t n) const
			{ return n * price; }
	virtual void debug() const;
	virtual ~Quote()
	{
		std::cout << "Quote:destructor\n";
	}

private:
	std::string bookNo;

protected:
	double price = 0.0;
};

void Quote::debug() const
{
	std::cout << "data member of the class is:\n"
		      << "bookNo = " << this->bookNo << " "
			  << "price = "  << this->price << ".\n";
}

#endif
