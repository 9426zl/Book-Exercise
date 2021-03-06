//
// Chapter07 Exercise01
//

#include <iostream>
#include <string>

using std::cin;using std::cout;
using std::endl;using std::cerr;
using std::string;

struct Sales_data {
	string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

int main()
{
	Sales_data total;

	if(cin >> total.bookNo >> total.revenue >> total.units_sold)
	{
		Sales_data trans;
		while(cin >> trans.bookNo >> trans.revenue >> trans.units_sold)
		{
			if(total.bookNo == trans.bookNo)
			{
				total.revenue += trans.revenue;
				total.units_sold += trans.units_sold;
			}
			else
			{
				cout << total.bookNo << total.revenue << total.units_sold << endl;
				total = trans;
			}
			cout << total.bookNo << total.revenue << total.units_sold << endl;
		}
	}
	else
	{
		cerr << "No data ?!" << endl;
		return -1;
	}

	return 0;
}