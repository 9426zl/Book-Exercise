//
// Chapter08 Exercise07
//

#include <iostream>
#include <fstream>
#include "\Chapter07\ex26.h"

using std::ifstream; using std::ofstream; using std::cin;
using std::cout; using std::endl; using std::cerr;

int main(int argc, char **argv)
{
	ifstream infile(argv[1]);
	ofstream outfile(argv[2]);

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
				print(outfile, total) << endl;
				total = trans;
			}
		}
		print(outfile, total) << endl;
	}
	else
	{
		cerr << "No data?!" << endl;
	}

	return 0;
}
