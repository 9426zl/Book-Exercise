//
// Chapter10 Exercise29
//

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <iterator>

using namespace std;

int main()
{
	ifstream in_file("exer.txt");
	istream_iterator<string> in(in_file), in_eof;
	ostream_iterator<string> out_iter(cout, " ");
	vector<string> svec;

	copy(in, in_eof, back_inserter(svec));
	copy(svec.cbegin(), svec.cend(), out_iter);

	return 0;
}
