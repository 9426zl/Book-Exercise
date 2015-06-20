//
// Chapter10 Exercise22
//

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>

using std::string; using std::vector; using std::cout;
using std::endl; using namespace std::placeholders;

bool check_size(const string &s, string::size_type sz)
{
	return s.size() >= sz;
}

int main()
{
	vector<string> words{"a", "ab", "abc", "abcdef", "abcdefg"};
	auto check_size6 = bind(check_size, _1, 6);
	auto wc = count_if(words.begin(), words.end(), check_size6);

	cout << wc << endl;

	return 0;
}