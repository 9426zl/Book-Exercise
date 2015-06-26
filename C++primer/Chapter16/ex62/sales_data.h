//
// Chapter14 Exercise02
//

#ifndef SALES_DATA_H
#define SALES_DATA_H

#include <iostream>
#include <string>

class Sales_data {
	friend std::hash<Sales_data>;
	friend std::ostream& operator<<(std::ostream&, const Sales_data&);
	friend std::istream& operator>>(std::ostream&, const Sales_data&);
	friend Sales_data operator+(const Sales_data&, const Sales_data&);
	friend bool operator==(const Sales_data &, const Sales_data &);	

public:
	Sales_data(std::string s, unsigned cnt, double price):
	  bookNo(s), units_sold(cnt), revenue(cnt*price) { }
	Sales_data(): Sales_data("", 0, 0) {}
	Sales_data(std::string s): Sales_data(s, 0, 0){}
	Sales_data(std::istream &is);

	Sales_data& operator+=(const Sales_data&);
	std::string isbn() const { return bookNo;}

private:
	inline double avg_price() const;

	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

inline 
bool compareIsbn(const Sales_data &lhs, const Sales_data &rhs)
{ 
	return lhs.isbn() < rhs.isbn(); 
}

inline
bool operator==(const Sales_data &lhs, const Sales_data &rhs)
{
	return lhs.isbn() == rhs.isbn() && 
	       lhs.units_sold == rhs.units_sold && 
	       lhs.revenue == rhs.revenue;
}

std::ostream& operator<<(std::ostream &os, const Sales_data &item)
{
	os << item.isbn() << " " << item.units_sold << " "
		<< item.revenue << " " << item.avg_price();
	return os;
}

std::istream& operator>>(std::istream &is, Sales_data &item)
{
	double price;
	is >> item.bookNo >> item.units_sold >> price;
	if(is)
		item.revenue = item.units_sold * price;
	else
		item = Sales_data();
	return is;
}

Sales_data operator+(const Sales_data &lhs, const Sales_data &rhs)
{
	Sales_data sum = lhs;
	sum += rhs;
	return sum;
}

inline double Sales_data::avg_price() const
{
	return units_sold ? revenue/units_sold : 0;
}

namespace std {
template<>
struct hash<Sales_data>
{
    typedef size_t result_type;
    typedef Sales_data argument_type;
    size_t  operator()(const Sales_data& s) const
    {
        return hash<string>()(s.bookNo) ^
                hash<unsigned>()(s.units_sold) ^
                hash<double>()(s.revenue);
    }
};
}

#endif
