//
// Chapter10 Exercise33
//

#include <iostream>
#include <fstream>
#include <iterator>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[])
{
	ifstream in_file(argv[1]);
	ofstream out_file_odd(argv[2]), out_file_even(argv[3]);

	istream_iterator<int> in(in_file), in_eof;
	ostream_iterator<int> out_odd(out_file_odd, " "), out_even(out_file_even, "\n");

	for_each(in, in_eof, 
		[&out_odd, &out_even](const int i)
		{*(i%2 ? out_odd : out_even)++ = i;});

	return 0;
}
