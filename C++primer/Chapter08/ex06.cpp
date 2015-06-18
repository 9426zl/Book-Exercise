//
// Chapter08 Exercise06
//

#include <iostream>
#include <fstream>
#include "\Chapter07\ex26.h"

using std::ifstream; using std::cin; using std::cout;
using std::endl; using std::cerr;

int main(int argc, char **argv)
{
	ifstream infile(argv[1]);

	Sales_data total;
	if(read(infile, total))
	{
		Sales_data trans;
		while(read(cin, trans))
		{
			if(total.isbn() == trans.isbn())
				total.combine(trans);
			else
			{
				print(cout, total) << endl;
				total = trans;
			}
		}
		print(cout, total) << endl;
	}
	else
	{
		cerr << "No data?!" << endl;
	}

	return 0;
}
