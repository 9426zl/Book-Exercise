//
// Chapter07 Exercise13
//

#include <iostream>
#include <string>

using namespace std;

struct Sales_data
{
	friend istream &read(istream& , Sales_data& );

public:
	Sales_data(istream &is)
	{
		read(is, *this);
	}

	Sales_data &combine(const Sales_data &rhs)
	{
		units_sold += rhs.units_sold;
		revenue += rhs.revenue;
		return *this;
	}

	string isbn() const{return bookNo;}

	double avg_price() const;

	string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

Sales_data add(const Sales_data &lhs, const Sales_data &rhs)
{
	Sales_data sum = lhs;
	sum.combine(rhs);
	return sum;
}

istream &read(istream &is, Sales_data &item)
{
	double price = 0;
	is >> item.bookNo >> item.units_sold >> price;
	item.revenue = price*item.units_sold;
	return is;
}

ostream &print(ostream &os, Sales_data &item)
{
	os << item.isbn() << " " << item.units_sold << " "<< item.revenue;

	return os;
}

int main()
{
	Sales_data total(cin);
	Sales_data trans(cin);
	
	if(read(cin, total))
	{
		while(read(cin, trans))
		{
			if(total.isbn() == trans.isbn())
				total.combine(trans);
			else
			{
				print(cout, total) << endl;
				total.bookNo = trans.bookNo;
				total.revenue = trans.revenue;
				total.units_sold = total.units_sold;
			}
		}
	}
	print(cout, total);
	
	return 0;
}

