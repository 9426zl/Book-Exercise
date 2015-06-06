//
// Chapter10 Exercise31
//

#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

int main()
{
	istream_iterator<int> in_int(cin), eof;
	vector<int> ivec;

	while(in_int != eof)
		ivec.push_back(*in_int++);

	sort(ivec.begin(), ivec.end());
	unique_copy(ivec.cbegin(), ivec.cend(), ostream_iterator<int>(cout, " "));

	return 0;
}