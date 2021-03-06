//
// Chapter10 Exercise16
//

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void elimDups(vector<string> &words)
{
	sort(words.begin(), words.end());
	auto end_unique = unique(words.begin(), words.end());
	words.erase(end_unique, words.end());
}

void biggies(vector<string> &words,
	vector<string>::size_type sz)
{
	elimDups(words);

	stable_sort(words.begin(), words.end(),
		[](const string &a, const string &b)
			{ return a.size() < b.size();});

	auto wc = find_if(words.begin(), words.end(),
		[sz](const string &a)
			{ return a.size() >= sz;});

	auto count = words.end() - wc;

	for_each(wc, words.end(),
		[](const string &s){cout << s << " ";});

	cout << endl;
}

int main()
{
	vector<string> svec{"a", "aaaaa", "aaa", "aaaa"};

	biggies(svec, 1);

	return 0;
}
