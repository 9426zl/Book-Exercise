Sales_data &combine(const Sales_data&rhs)
{
	units_sold += rhs.units_sold;
	revenue += rhs.revenue;
	return *this;
}
string isbn() const{return bookNo;}